#include "RPN.hpp"

RPN::RPN(){}
RPN::RPN(const RPN &other)
{
    std::cout << "RPN Copy constructor called" << std::endl;
    *this = other;
}
RPN &RPN::operator=(const RPN &other)
{
    if (this != &other)
    {
          this->_stack = other._stack;
    }
    return (*this);
}
RPN::~RPN(){}
bool RPN::calculate(const char *data, int &res)
{
    std::stack<int> _stack;
    int i = 0;

    while (data[i])
    {
        while (data[i] == ' ' || data[i] == '\t')
            i++;

        if (!data[i])
            break;
        if (std::isdigit(data[i]))
        {
            int num = 0;
            while (std::isdigit(data[i]))
            {
                num = num * 10 + (data[i] - '0');
                i++;
            }
            if (num < 0 || num > 9)
            {
                std::cerr << "Error: number out of range (0-9): " << num << std::endl;
                return false;
            }
            _stack.push(num);
        }
        else
        {
            if (_stack.size() < 2)
            {
                std::cerr << "Error: insufficient operands for operator '" << data[i] << "'" << std::endl;
                return false;
            }

            int b = _stack.top(); _stack.pop();
            int a = _stack.top(); _stack.pop();

            switch (data[i])
            {
                case '+': 
                _stack.push(a + b); 
                break;
                case '-': 
                _stack.push(a - b); 
                break;
                case '*': 
                _stack.push(a * b)
                ; break;
                case '/':
                    if (b == 0)
                    {
                        std::cerr << "Error: division by zero" << std::endl;
                        return false;
                    }
                    _stack.push(a / b);
                    break;
                default:
                    std::cerr << "Error: invalid operator '" << data[i] << "'" << std::endl;
                    return false;
            }
            i++;
        }
    }
    if (_stack.size() != 1)
    {
        std::cerr << "Error: invalid expression" << std::endl;
        return false;
    }

    res = _stack.top();
    return true;
}