/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:52:12 by ppassos           #+#    #+#             */
/*   Updated: 2025/09/09 18:11:59 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
#define HumanA_HPP
#include "Weapon.hpp"
class HumanA
{
	private:
		Weapon &weapon;
		std::string name;
	public:
		HumanA(std::string name, Weapon &weaponType);
		~HumanA();
		std::string getWeapon();
		void setWeapon(std::string weapon);
		void attack();
};
#endif