/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 08:48:12 by ppassos           #+#    #+#             */
/*   Updated: 2026/03/06 08:48:39 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./convert <literal>" << std::endl;
		return (1);
	}

	ScalarConverter::convert(av[1]);

	return (0);
}