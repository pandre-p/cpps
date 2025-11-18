/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:21:34 by ppassos           #+#    #+#             */
/*   Updated: 2025/10/15 14:12:50 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{

	ClapTrap a("bob");
	ScavTrap b("rui");
	FragTrap c("Thomas");

	a.attack("rui");
	b.takeDamage(0);
	b.attack("bob");
	a.takeDamage(20);
	c.attack("bob");
	a.takeDamage(30);
	a.beRepaired(100);
	b.guardGate();
	c.highFivesGuys();
}