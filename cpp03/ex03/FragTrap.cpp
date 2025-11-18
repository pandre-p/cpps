/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:01:16 by ppassos           #+#    #+#             */
/*   Updated: 2025/10/17 11:15:36 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("Default FragTrap")
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "Default FragTrap was created!" <<std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	this->name = name;
	std::cout << name << " FragTrap was created!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->name <<" FragTrap was destroyed!" <<std::endl;
}


FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "Copy constructor called for FragTrap " << this->name << std::endl;
}
FragTrap	&FragTrap::operator=(const FragTrap &other)
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

void FragTrap::highFivesGuys(void)
{
	std::cout << this->name << " Fragtrap sad: Lest give a highfive!!!" << std::endl;
}
void FragTrap::attack(const std::string& target)
{
	if (this->hit_points <= 0)
	{
		std::cout << "FragTrap " << this->name << " is dead and cannot take damage" << std::endl;
	}
	else if(this->energy_points > 0)
	{
		std::cout << "FragTrap " << this->name <<" attacks " << target <<" ,causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_points--;
	}
	else
		std::cout << "No energy points to attack Fragtrap target" << std::endl;
}
