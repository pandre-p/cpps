/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:59:57 by ppassos           #+#    #+#             */
/*   Updated: 2025/09/02 11:32:43 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <stdio.h>

void 	Phonebook::set_contacts_number()
{
	if(number_of_contacts == 8)
		number_of_contacts = 8;
	else
		number_of_contacts = number_of_contacts + 1;
	
}

int empty_output(std::string s)
{
	for (size_t i = 0; i < s.length(); i++)
	{
        if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
            return (0);
    }
    return (1);
}
int not_number(std::string s)
{
	if (s.length() != 9)
		return(0);
	for (size_t i = 0; i < s.length(); i++)
	 {
        if (!std::isdigit(s[i]))
            return (0);
	 }
	return (1);
}

Contact Phonebook::create_contacts()
{
	 std::string input;
	 int i = 0;
	 Contact c;

	 while (1)
	 {
		if (i == 0)
		{
			std::cout << "first name:";
			std::getline(std::cin, input);
			if (std::cin.eof())
			{
				c.set_failure(1);
        		return (c);
			}
			if (empty_output(input))
				std::cout << "output invalid" << std::endl;
			else
			{
				c.set_first_name(input);
				i++;
			}
		}
		else if (i == 1)
		{
			std::cout << "last name:";
			std::getline(std::cin, input);
			if (std::cin.eof())
			{
				c.set_failure(1);
        		return (c);
			}
			if (empty_output(input))
				std::cout << "output invalid" << std::endl;
			else
			{
				c.set_last_name(input);
				i++;
			}
		}
		else if (i == 2)
		{
			std::cout << "nickname:";
			std::getline(std::cin, input);
			if (std::cin.eof())
			{
				c.set_failure(1);
        		return (c);
			}
			if (empty_output(input))
				std::cout << "output invalid" << std::endl;
			else
			{
				c.set_nickname(input);
				i++;
			}
		}
		else if (i == 3)
		{
			std::cout << "phone number:";
			std::getline(std::cin, input);
			if (std::cin.eof())
			{
				c.set_failure(1);
        		return (c);
			}
			if (empty_output(input) || !not_number(input))
				std::cout << "output invalid" << std::endl;
			else
			{
				c.set_phone_number(input);
				i++;
			}
		}
		else if (i == 4)
		{
			std::cout << "darkest secret:";
			std::getline(std::cin, input);
			if (std::cin.eof())
			{
				c.set_failure(1);
        		return (c);
			}
			if (empty_output(input))
				std::cout << "output invalid" << std::endl;
			else
			{
				c.set_darkest_secret(input);
				i++;
				break ;
			}
		}
	 }
	 c.set_failure(0);
	 return (c);
}

void	Phonebook::add_contacts(Contact &contact, int i)
{
	std::string input;
	
	set_contacts_number();
	newest_contact = i;
	contacts[i] = contact;
}

void	Phonebook::format_for_table(const std::string &field)
{
	if (field.length() <= 10)
		std::cout << std::setw(10) << field;
	else
		std::cout << field.substr(0, 9) << ".";
}

int index_input(std::string input)
{
	int number = 0;
	if (input.length() != 1)
		return(-1);
	for (size_t i = 0; i < input.length(); i++)
	{
		if (!std::isdigit(input[i]))
			return (-1);
	}
	std::stringstream ss(input);
	ss >> number;
	if(ss.fail())
		return(-1);
	else
		return(number);
}

void Phonebook::search_contact()
{
	std::string input;
	int index = 0;

	if (number_of_contacts == 0)
	{
		std::cout << "List is empty!" << std::endl;
		return ;	
	}
	std::cout << "|" << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;

	for(int i = 0; i < number_of_contacts; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		format_for_table(contacts[i].get_first_name());
		std::cout << "|";
		format_for_table(contacts[i].get_last_name());
		std::cout << "|";
		format_for_table(contacts[i].get_nickname());
		std::cout << "|" << std::endl;
	}
	while (1)
	{
		std::cout << "Choose Index:";
		std::getline(std::cin, input);
		if (std::cin.eof())
        	exit(0);
		index = index_input(input);
    	if (index >= 1 && index <= number_of_contacts)
		{ 
			std::cout << "First name:";
        	std::cout << contacts[index - 1].get_first_name() << std::endl;
			std::cout << "Last name:";
			std::cout << contacts[index - 1].get_last_name() << std::endl;
			std::cout << "Nickname:";
			std::cout << contacts[index - 1].get_nickname() << std::endl;
			std::cout << "Phone number:";
			std::cout << contacts[index - 1].get_phone_number() << std::endl;
			std::cout << "darkest secret:";
			std::cout << contacts[index - 1].get_darkest_secret() << std::endl;
			break ;
		}
		else
    		std::cout << "invalid index, please input a valid index" << std::endl;
	}
}

void Phonebook::set_variables()
{
	number_of_contacts = 0;
	newest_contact = 0;
}