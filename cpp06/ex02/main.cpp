#include "Base.hpp"

int main()
{
	// Gera um objeto aleatório (A, B ou C)
	Base* ptr = generate();

	std::cout << "\nIdentify by POINTER:" << std::endl;
	identify(ptr);

	std::cout << "\nIdentify by REFERENCE:" << std::endl;
	identify(*ptr);

	// Libertar memória
	delete ptr;

	return 0;
}