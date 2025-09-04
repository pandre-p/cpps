/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 08:30:27 by ppassos           #+#    #+#             */
/*   Updated: 2025/09/04 09:23:02 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iomanip>
#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string name="");
		~Zombie();
		void announce(void);
		void set_name(const std::string &name);
		std::string get_name(void) const;
};

Zombie	*newZombie(std::string name);
void randomChump(std::string name);

#endif