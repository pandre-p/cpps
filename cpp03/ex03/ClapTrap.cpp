/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:22:56 by ppassos           #+#    #+#             */
/*   Updated: 2025/10/15 18:14:02 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Default"), hit_points(10), attack_damage(0), energy_points(10)
{
	std::cout << "Default claptrap was created!" <<std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hit_points(10), attack_damage(0), energy_points(10)
{
	std::cout << this->name << " claptrap was created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name <<" claptrap was destroyed!" <<std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name), hit_points(other.hit_points), attack_damage(other.attack_damage), energy_points(other.energy_points)
{
	std::cout << "Copy constructor called for ClapTrap " << this->name << std::endl;
}
ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
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

void ClapTrap::attack(const std::string& target)
{
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead and cannot take damage" << std::endl;
	}
	else if(this->energy_points > 0)
	{
		std::cout << "ClapTrap " << this->name <<" attacks " << target <<" ,causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_points--;
	}
	else
		std::cout << "No energy points to attack Claptrap target" << std::endl;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points <= 0)
	{
		std::cout << this->name << " is dead and cannot take damage" << std::endl;
		return ;
	}
	std::cout << this->name << " took " << amount << " points of damage" << std::endl;
	this->hit_points -= amount;
	if (this->hit_points < 0)
		this->hit_points = 0;
	std::cout << this->name << " current HP is " << this->hit_points << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points <= 0)
		std::cout << this->name << " is already dead and cannot be revive!" << std::endl;
	else if(this->energy_points == 0)
		std::cout << "no energy points to repair this " << this->name << std::endl;
	else
	{
		this->energy_points--;
		this->hit_points += amount;
		std::cout << this->name << " got repaired and got more " << amount << " hp!" << std::endl;
	}
	return ;
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->hit_points);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (this->energy_points);
}
