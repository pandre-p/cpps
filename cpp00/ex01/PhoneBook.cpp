/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:59:57 by ppassos           #+#    #+#             */
/*   Updated: 2025/08/06 14:02:53 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void 	Phonebook::set_contacts_number(int i)
{
	if(number_of_contacts == 8)
		number_of_contacts = i;
	else
		number_of_contacts = number_of_contacts + i;
	
}
void	Phonebook::add_contact(const Contact &contact)
{
	std::string input;
	Contact c;
	int i = 0;
	
	set_contacts_number(i);
	while (i <= 4)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		i++;
	}
}