#include "iter.hpp"
void printInt(int &x)
{
    std::cout << x << std::endl; 
}

void increment(int &x)
{
    x = x + 1;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    std::cout << "------------" << std::endl;
    iter(arr, 5, printInt);
    std::cout << "____________" << std::endl;
    iter(arr, 5, increment);
    std::cout << "____________" << std::endl;
    iter(arr, 5, printInt);
    std::cout << "------------" << std::endl;
}