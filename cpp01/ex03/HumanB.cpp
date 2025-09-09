/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:52:09 by ppassos           #+#    #+#             */
/*   Updated: 2025/09/09 19:09:19 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	std::cout << "Human: " << this->name << " was been created!" <<std::endl;
}
HumanB::~HumanB()
{
	std::cout << "HumanB: " << this->name << "was been destroyed" << std::endl;
}

void HumanB::attack()
{
	std::cout << name <<" attacks with their " << weapon->getType() << std::endl;
}
void HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon; 
}