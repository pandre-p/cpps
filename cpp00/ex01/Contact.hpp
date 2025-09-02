/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:59:41 by ppassos           #+#    #+#             */
/*   Updated: 2025/09/02 11:27:55 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{

private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		int failure;

public:
		void set_first_name(std::string s);
		void set_last_name(std::string s);
		void set_nickname(std::string s);
		void set_phone_number(std::string s);
		void set_darkest_secret(std::string s);
		void set_failure(int i);
		int true_failure();
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_phone_number();
		std::string get_darkest_secret();
};

#endif