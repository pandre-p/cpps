/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 08:11:58 by ppassos           #+#    #+#             */
/*   Updated: 2025/08/04 09:11:17 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		for(int i = 1; i < ac; i++)
		{
			std::string word = av[i];
			for (char *c = &word[0]; *c != '\0'; ++c)
				*c = std::toupper(*c);
			std::cout << word;
		}
	return(0);
}