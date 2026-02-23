#include "Span.hpp"

Span::Span(unsigned int n) : _maxsize(n) {}

void Span::addNumber(int number)
{
    if (_numbers.size() >= _maxsize)
        throw std::runtime_error("Span is full");
    _numbers.push_back(number);
}

int Span::longestSpan()
{
    if (_numbers.size() < 2)
        throw std::runtime_error("Not enough numbers");
     int max = *std::max_element(_numbers.begin(), _numbers.end());
     int min = *std::min_element(_numbers.begin(), _numbers.end());

     return (max - min);
}

int Span::shortestSpan()
{
    if (_numbers.size() < 2)
        throw std::runtime_error("Not enough numbers");

    std::vector<int> temp = _numbers;    // copia para ordenar
    std::sort(temp.begin(), temp.end());

    int minSpan = temp[1] - temp[0];
    for (size_t i = 1; i < temp.size() - 1; i++)
    {
        int span = temp[i + 1] - temp[i];
        if (span < minSpan)
            minSpan = span;
    }
    return minSpan;
}