/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 10:36:39 by ppassos           #+#    #+#             */
/*   Updated: 2025/09/10 17:16:14 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iomanip>
#include <string>
#include <iostream>

class Fixed
{
	private:
		int	_rawBits;
		static const int	_fractionalBits;
	public:
		Fixed(int v = 0);
		~Fixed();
		//A copy constructor
		Fixed(const Fixed& other);
		//A copy assignment operator overload.
		Fixed& operator= (const Fixed& other);
		int getRawBits(void) const; //that returns the raw value of the fixed-point value
		void setRawBits(int const raw); //that sets the raw value of the fixed-point number
};
#endif