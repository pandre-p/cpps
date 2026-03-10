/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 08:50:05 by ppassos           #+#    #+#             */
/*   Updated: 2026/03/06 08:50:07 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	// Gera um objeto aleatório (A, B ou C)
	Base* ptr = generate();

	std::cout << "\nIdentify by POINTER:" << std::endl;
	identify(ptr);

	std::cout << "\nIdentify by REFERENCE:" << std::endl;
	identify(*ptr);

	// Libertar memória
	delete ptr;

	return 0;
}