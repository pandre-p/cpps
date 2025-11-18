/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:52:15 by ppassos           #+#    #+#             */
/*   Updated: 2025/09/10 10:20:54 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weaponType): weapon(weaponType), name(name)
{
	std::cout << "HumanA: " << name << " was been created!" <<std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA: " << name << " was been destroyed" << std::endl;
}

void HumanA::attack()
{
	std::cout << name <<" attacks with their " << weapon.getType() << std::endl;
}
