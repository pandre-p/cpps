/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 10:36:50 by ppassos           #+#    #+#             */
/*   Updated: 2025/09/23 10:58:37 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _rawBits(0) //deflaut
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed()
{
	std::cout << "was destroyed!" << std::endl;
}
Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_rawBits = other._rawBits;
}
Fixed::Fixed(const int num) //int
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = num << this->_fractionalBits;
}
Fixed::Fixed(const float num) // float
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(num * 256);
}
Fixed& Fixed::operator= (const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_rawBits = other.getRawBits();
	return(*this);
}
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_rawBits);
}
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;	
}
float Fixed::toFloat( void ) const
{
	float float_value = this->_rawBits / (float)(1 << this->_fractionalBits);
	return(float_value);
}

int Fixed::toInt( void ) const
{
	return(this->_rawBits >> this->_fractionalBits);
}
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return(os);
}