/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 10:54:19 by ppassos           #+#    #+#             */
/*   Updated: 2025/09/09 15:31:02 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl bot;

	if (ac != 2)
	{
		std::cout << "Please select a level" << std::endl;
		return(0);	
	}
	bot.complain(av[1]);
}