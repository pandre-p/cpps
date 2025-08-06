/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:00:46 by ppassos           #+#    #+#             */
/*   Updated: 2025/08/06 14:08:30 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	Phonebook pb;
	std::string input;
	std::cout << "Welcome to PhoneBook!" << std::endl;
	while(1)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			Contact c = create_contact();
			pb.add_contact(c);
			std::cout << "Contact added!" << std::endl;
		}
		else if(input == "SEARCH")
		{
			std::cout << "Contact search!" << std::endl;
			//pb.search_contact();
		}
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Please use one of this valid comands: ADD, SEARCH or EXIT" << std::endl;
	}
}