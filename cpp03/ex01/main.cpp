/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:21:34 by ppassos           #+#    #+#             */
/*   Updated: 2025/10/15 13:51:14 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{

	ClapTrap a("bob");
	ScavTrap b("rui");
	ScavTrap c("Thomas");

	a.attack("rui");
	b.attack("bob");
	c.guardGate();
	b.guardGate();
}