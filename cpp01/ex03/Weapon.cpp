/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:51:51 by ppassos           #+#    #+#             */
/*   Updated: 2025/09/09 18:53:05 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
	std::cout << "Weapon: " << this->type << "was been created!" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon: " << this->type << "was been destroyed" << std::endl;
}

std::string Weapon::getType()
{
	return(this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
