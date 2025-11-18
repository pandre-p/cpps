/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:18:43 by ppassos           #+#    #+#             */
/*   Updated: 2025/10/17 11:14:51 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Default ScavTrap")
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "Default ScavTrap was created!" <<std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	this->name = name;
	std::cout << name << " ScavTrap was created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name <<" ScavTrap was destroyed!" <<std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "Copy constructor called for ScavTrap " << this->name << std::endl;
}
ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
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

void ScavTrap::guardGate()
{
	std::cout << this->name << " ScavTrap is now in Gate keeper mode" <<std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->hit_points <= 0)
	{
		std::cout << "ScavTrap " << this->name << " is dead and cannot take damage" << std::endl;
	}
	else if(this->energy_points > 0)
	{
		std::cout << "ScavTrap " << this->name <<" attacks " << target <<" ,causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_points--;
	}
	else
		std::cout << "No energy points to attack Scavtrap target" << std::endl;
}