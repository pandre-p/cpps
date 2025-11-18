/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:48:57 by ppassos           #+#    #+#             */
/*   Updated: 2025/10/16 16:52:56 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	brain = new Brain();
	this->type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
}


Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*other.brain);
}
Cat	&Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other)
	{
		delete brain;
		brain = new Brain(*other.brain);
		Animal::operator=(other);
		this->type = other.type;
	}
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}
void Cat::makeSound() const
{
	std::cout << " MEOW MEOW " << std::endl;
}