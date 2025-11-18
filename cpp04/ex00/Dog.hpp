/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:06:08 by ppassos           #+#    #+#             */
/*   Updated: 2025/10/16 15:27:51 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog	&operator=(const Dog &other);
		Dog(const Dog &other);
		~Dog();

		void makeSound() const;
};

#endif