#ifndef RPN_H
# define RPN_H

#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <cerrno>
#include <climits>

class RPN
{
	private:
		std::stack<int>	_stack;
	public:
		RPN();
		RPN(const RPN &);
		RPN	&operator=(const RPN &other);
		~RPN();

		bool	calculate(const char *data, int &res);
};

#endif