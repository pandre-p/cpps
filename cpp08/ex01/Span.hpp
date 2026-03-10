/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 08:54:10 by ppassos           #+#    #+#             */
/*   Updated: 2026/03/06 08:54:11 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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