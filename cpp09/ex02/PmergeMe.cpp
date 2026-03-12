#include "PmergerMe.hpp"

void PmergeMe::fillContainers(char **av, int ac)
{
    for (int i = 1; i < ac; i++)
    {
        int num = atoi(av[i]); // já assumindo que validaste os números
        _vecData.push_back(num);
        _deqData.push_back(num);
    }
}