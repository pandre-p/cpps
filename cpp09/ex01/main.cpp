#include "RPN.hpp"
int main(int ac, char **av)
{
	int result ;
	RPN a;
	if (ac != 2 || !a.calculate(av[1], result))
	{
		std::cerr << "Error:Wrong input" << std::endl;
		return 1;
	}
	std::cout << "Result: " << result << std::endl;
}