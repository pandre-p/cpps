/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:00:15 by ppassos           #+#    #+#             */
/*   Updated: 2025/08/06 14:06:50 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
#include <string>
#include <iostream>
#include <cctype>

class Phonebook
{
	private:
		Contact	contacts[8];
		int		number_of_contacts;
		int		oldest_contact;
		//void format_field(const std::string &field) const;

	public:
		Phonebook();
		~Phonebook();

		void	add_contact(const Contact &contact);
		//void	search_contact() const;
		void 	set_contacts_number(int i);
		//void	display_contact_info(int index) const;
};

#endif