/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:22:52 by ppassos           #+#    #+#             */
/*   Updated: 2025/10/10 18:23:25 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iomanip>
#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int hit_points;
		int energy_points;
		int attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap	&operator=(const ClapTrap &other);
		ClapTrap(const ClapTrap &other);
		~ClapTrap();
	
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int	getHitPoints(void) const;
		int	getEnergyPoints(void) const;
};
#endif