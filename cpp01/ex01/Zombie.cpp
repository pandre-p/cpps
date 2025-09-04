/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 08:22:51 by ppassos           #+#    #+#             */
/*   Updated: 2025/09/04 10:07:40 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
    std::cout << "Zombie " << " was been created!" << std::endl;
}
Zombie::~Zombie()
{
	std::cout << name <<" was been destroyed!"<< std::endl;
}
void Zombie::announce(void)
{
	std::cout << name <<": BraiiiiiiinnnzzzZ..."<< std::endl;
}

void Zombie::set_name(const std::string &name)
{
	this->name = name;
}

std::string Zombie::get_name(void) const
{
	return(name);
}