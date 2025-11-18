/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:49:01 by ppassos           #+#    #+#             */
/*   Updated: 2025/10/16 16:54:00 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	brain = new Brain();
	this->type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain(*other.brain);
}
Dog	&Dog::operator=(const Dog &other)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &other)
	{
		delete brain;
		brain = new Brain(*other.brain);
		Animal::operator=(other);
		this->type = other.type;
	}
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}
void Dog::makeSound() const
{
	std::cout << " WOOf WOOf " << std::endl;
}