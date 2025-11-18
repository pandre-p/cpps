/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:52:09 by ppassos           #+#    #+#             */
/*   Updated: 2025/09/10 10:16:25 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): weapon(NULL), name(name)
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
	if(this->weapon)
		std::cout << this->name <<" attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << this->name << "tryed to attack but have no weapon!" << std::endl;
}
void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon; 
}