/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 08:49:07 by ppassos           #+#    #+#             */
/*   Updated: 2026/03/06 08:49:11 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
#include <climits>
#include <cfloat>
#include <sstream>
#include <cctype>

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter	&operator=(const ScalarConverter &other);
        ~ScalarConverter();

        static bool	isChar(const std::string &str);
		static bool	isInt(const std::string &str);
		static bool	isFloat(const std::string &str);
		static bool	isDouble(const std::string &str);
		static bool	isPseudoL(const std::string &str);

		
		static void	convertFromChar(char c);
		static void	convertFromInt(int value);
		static void	convertFromFloat(float value);
		static void	convertFromDouble(double value);
		static void	handlePseudoL(const std::string &str);

		static void	displayChar(double value, bool impossible = false);
		static void	displayInt(double value, bool impossible = false);
		static void	displayFloat(double value, bool impossible = false);
		static void	displayDouble(double value, bool impossible = false);


    public:
        static void convert(const std::string& literal);

};


#endif