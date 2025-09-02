/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:00:46 by ppassos           #+#    #+#             */
/*   Updated: 2025/09/02 11:34:14 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int limit_contact(int i)
{
	if (i == 8)
		return(0);
	return(i);
}

int main()
{
	Phonebook pb;
	std::string input;
	int	i = 0;
	Contact c;

	std::cout << "Welcome to PhoneBook!" << std::endl;
	pb.set_variables();
	while(1)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		if (std::cin.eof())
        	break ;
		else if (input == "ADD")
		{
			c = pb.create_contacts();
			if (c.true_failure() == 1)
				break ;
			pb.add_contacts(c, i);
			i++;
			i = limit_contact(i);
			std::cout << "Contact added!" << std::endl;
		}
		else if(input == "SEARCH")
		{
			std::cout << "Contacts search!" << std::endl;
			pb.search_contact();
		}
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Please use one of this valid comands: ADD, SEARCH or EXIT" << std::endl;
	}
}
