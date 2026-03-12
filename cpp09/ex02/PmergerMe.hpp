#ifndef PMERGERME_HPP
#define PMERGERME_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <deque>
#include <algorithm>
#include <cstdlib>
#include <stdexcept>
#include <sys/time.h>
#include <iomanip>
#include <sstream>

class PmergeMe
{
    private:
        std::vector<int> _vecData;
        std::deque<int> _deqData;
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &);
        PmergeMe &operator=(const PmergeMe &);
        ~PmergeMe();

        void fillContainers(char **av, int ac);
        void sortVector();
        void sortDeque();
        void printVector();
        void printDeque();
};
#endif