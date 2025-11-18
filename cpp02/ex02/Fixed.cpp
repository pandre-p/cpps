/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 10:36:50 by ppassos           #+#    #+#             */
/*   Updated: 2025/10/14 13:59:51 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _rawBits(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
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

Fixed Fixed::operator+ (const Fixed& other) const
{
	Fixed a;
	a._rawBits = this->_rawBits + other._rawBits;
	return(a);
}

Fixed Fixed::operator- (const Fixed& other) const
{
	Fixed a;
	a._rawBits = this->_rawBits - other._rawBits;
	return(a);
}

Fixed Fixed::operator* (const Fixed& other) const
{
	Fixed a;
	long long temp =(long long)this->_rawBits * other._rawBits;
	a._rawBits = temp >> _fractionalBits;
	return(a);
}
Fixed Fixed::operator/ (const Fixed& other) const
{
	Fixed a;
	long long temp = ((long long)this->_rawBits << _fractionalBits) / other._rawBits;
	a._rawBits = temp;
	return(a);
}

bool Fixed::operator== (const Fixed& other) const
{
	if(this->_rawBits == other._rawBits)
		return(1);
	else
		return(0);
}

bool Fixed::operator!= (const Fixed& other) const
{
	if(this->_rawBits != other._rawBits)
		return(1);
	else
		return(0);
}

bool Fixed::operator> (const Fixed& other) const
{
	if(this->_rawBits > other._rawBits)
		return(1);
	else
		return(0);
}
bool Fixed::operator< (const Fixed& other) const
{
	if(this->_rawBits < other._rawBits)
		return(1);
	else
		return(0);
}

bool Fixed::operator>= (const Fixed& other) const
{
	if(this->_rawBits >= other._rawBits)
		return(1);
	else
		return(0);
}

bool Fixed::operator<= (const Fixed& other) const
{
	if(this->_rawBits <= other._rawBits)
		return(1);
	else
		return(0);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a._rawBits < b._rawBits)
		return(a);
	else
		return(b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a._rawBits < b._rawBits)
		return(a);
	else
		return(b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a._rawBits > b._rawBits)
		return(a);
	else
		return(b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a._rawBits > b._rawBits)
		return(a);
	else
		return(b);
}

Fixed& Fixed::operator++()
{
	this->_rawBits += 1;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
    _rawBits += 1;
    return (temp);
}

Fixed& Fixed::operator--()
{
	this->_rawBits -= 1;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
    _rawBits -= 1;
    return (temp);
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