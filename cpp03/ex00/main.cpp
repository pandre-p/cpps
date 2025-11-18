/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:21:34 by ppassos           #+#    #+#             */
/*   Updated: 2025/10/17 09:21:05 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
//VERIFY THE ATTACK TO BE EQUAL TO THE OTHERS
int main(void)
{
	ClapTrap *as = new ClapTrap("bob");
	ClapTrap a("bob");
	ClapTrap b("rui");
	ClapTrap c("Thomas");

	a.attack("rui");
	b.takeDamage(0);
	b.attack("bob");
	a.takeDamage(0);
	c.beRepaired(10);
	c.attack("rui");
	b.takeDamage(0);
	c.attack("rui");
	b.takeDamage(0);
	c.attack("rui");
	b.takeDamage(0);
	c.attack("rui");
	b.takeDamage(0);
	c.attack("rui");
	b.takeDamage(0);
	c.attack("rui");
	b.takeDamage(0);
	delete as;
}