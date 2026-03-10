/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 08:51:37 by ppassos           #+#    #+#             */
/*   Updated: 2026/03/06 08:51:38 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
private:
    T * _elements;
    unsigned int _size;
public:
    Array();
    Array(unsigned int n);
    Array(const Array<T> &other);
    Array<T>	&operator=(const Array<T> &other);
    ~Array();

    T &operator[](unsigned int index);
    const T &operator[](unsigned int index) const;
    unsigned int size() const;
};

#include "Array.tpp"

#endif