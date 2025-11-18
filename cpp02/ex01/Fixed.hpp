/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 10:36:39 by ppassos           #+#    #+#             */
/*   Updated: 2025/10/14 14:33:10 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	_rawBits;
		static const int	_fractionalBits;
	public:
		Fixed();
		Fixed(const int num); //new
		Fixed(const float num); //new
		//A copy constructor
		Fixed(const Fixed& other);
		~Fixed();
		//A copy assignment operator overload.
		Fixed& operator= (const Fixed& other);

		float toFloat( void ) const;
		int toInt( void ) const;

		int getRawBits(void) const; //that returns the raw value of the fixed-point value
		void setRawBits(int const raw); //that sets the raw value of the fixed-point number
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif