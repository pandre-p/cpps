/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:59:44 by ppassos           #+#    #+#             */
/*   Updated: 2025/09/02 11:27:54 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_first_name(std::string s)
{
	first_name = s;
}

void Contact::set_last_name(std::string s)
{
	last_name = s;
}

void Contact::set_nickname(std::string s)
{
	nickname = s;
}

void Contact::set_phone_number(std::string s)
{
	phone_number = s;
}

void Contact::set_darkest_secret(std::string s)
{
	darkest_secret = s;
}
void Contact::set_failure(int i)
{
	failure = i;
}
int Contact::true_failure()
{
	if (failure == 1)
		return(1);
	else
		return(0);
}
std::string Contact::get_first_name()
{
	return first_name;
}

std::string Contact::get_last_name()
{
	return last_name;
}

std::string Contact::get_nickname()
{
	return nickname;
}
std::string Contact::get_phone_number()
{
	return phone_number;
}
std::string Contact::get_darkest_secret()
{
	return darkest_secret;
}
