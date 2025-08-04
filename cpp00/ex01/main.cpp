/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:00:46 by ppassos           #+#    #+#             */
/*   Updated: 2025/08/04 11:40:58 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <iostream>
#include <cctype>

int main()
{
	std::string input;
	std::cout << "Progra" << std::endl;
	while(1)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout << "Vai adicionar" << std::endl;
		}
		else if(input == "SEARCH")
		{
			std::cout << "Vai procurar" << std::endl;
		}
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Please use this valid comands: ADD, SEARCH or EXIT" << std::endl;
	}
}