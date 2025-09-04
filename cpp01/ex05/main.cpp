/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 10:53:48 by ppassos           #+#    #+#             */
/*   Updated: 2025/09/04 11:10:57 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please select a level" << std::endl;
		return(0);	
	}
	if (av[1] == "DEBUG")
	{
		
	}
	else if (av[1] == "INFO")
	{
		
	}
	else if (av[1] == "WARNING")
	{
		
	}
	else if (av[1] == "ERROR")
	{
		
	}
	else
	{
		std::cout << "Please select a level" << std::endl;
		return(0);
	}
}