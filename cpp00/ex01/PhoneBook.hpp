/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:00:15 by ppassos           #+#    #+#             */
/*   Updated: 2025/09/02 10:54:06 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
#include <string>
#include <iostream>
#include <sstream>
#include <cctype>
#include <cstdlib>

class Phonebook
{
	private:
		Contact	contacts[8];
		int		number_of_contacts;
		int		newest_contact;
		void format_for_table(const std::string &field);

	public:

		void	add_contacts(Contact &contact, int i);
		void	search_contact();
		void 	set_contacts_number();
		Contact create_contacts();
		void set_variables();
};

int empty_output(std::string s);
int not_number(std::string s);

#endif