#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>
#include <stdexcept>
#include <algorithm> // ver!

class Span
{
private:
    unsigned int _maxsize;
    std::vector<int> _numbers;
    
public:
    Span(unsigned int n);
    void addNumber(int number);
    int shortestSpan();
    int longestSpan();
    //~Span();
};
#endif