#include "PmergerMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::PmergeMe(const PmergeMe &other)
{
    std::cout << "RPN Copy constructor called" << std::endl;
    *this = other;
}
PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    if (this != &other)
    {
          this->_vecData = other._vecData;
          this->_deqData = other._deqData;
    }
    return (*this);
}
PmergeMe::~PmergeMe(){}

void PmergeMe::fillContainers(char **av, int ac)
{
    for (int i = 1; i < ac; i++)
    {
        int num = atoi(av[i]);
        _vecData.push_back(num);
        _deqData.push_back(num);
    }
}

void PmergeMe::printVector()
{
    size_t i = 0;
    while (i < _vecData.size())
    {
        std::cout << _vecData[i] << " ";
        i++;
    }
    std::cout << std::endl;
}

void PmergeMe::printDeque()
{
    size_t i = 0;
    while (i < _deqData.size())
    {
        std::cout << _deqData[i] << " ";
        i++;
    }
    std::cout << std::endl;
}

