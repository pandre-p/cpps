/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:35:13 by ppassos           #+#    #+#             */
/*   Updated: 2025/10/15 18:10:58 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), name("Default DiamondTrap")
{
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = ScavTrap::attack_damage;
	std::cout << "Default DiamondTrap was created!" <<std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), name(name)
{
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = ScavTrap::attack_damage;
	std::cout << this->name << " DiamondTrap was created!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->name <<" DiamondTrap was destroyed!" <<std::endl;
}


DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other)
{
	*this = other;
	std::cout << "Copy constructor called for DiamondTrap " << this->name << std::endl;
}
DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage;
	}
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << this->name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}
void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}