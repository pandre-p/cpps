/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 08:22:00 by ppassos           #+#    #+#             */
/*   Updated: 2025/09/04 09:34:19 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main()
{
	Zombie* z1 = newZombie("Peper");
    Zombie* z2 = newZombie("Spray");
	randomChump("Tomas");
	randomChump("rui");
	delete z1;
	delete z2;
}