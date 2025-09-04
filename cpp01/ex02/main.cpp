/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 10:14:28 by ppassos           #+#    #+#             */
/*   Updated: 2025/09/04 10:14:57 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string* str_ptr = &str;
	std::string& str_ref = str;

	std::cout << "Address of the string variable: " << &str << std::endl;
	std::cout << "Address held by string_ptr: " << str_ptr << std::endl;
	std::cout << "Address held by string_ref: " << &str_ref << std::endl;

	std::cout << std::endl << "Original string variable: " << str << std::endl;
	std::cout << "Value pointed to bystring_ptr: " << *str_ptr << std::endl;
	std::cout << "Value pointed to by string_ref: " << str_ref << std::endl;

	return 0;
}