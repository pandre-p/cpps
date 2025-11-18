/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 08:22:00 by ppassos           #+#    #+#             */
/*   Updated: 2025/09/04 10:02:23 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main()
{
	Zombie* zw1 = zombieHorde(3 ,"Peper");
    Zombie* zw2 = zombieHorde(4 ,"Spray");
	delete []zw1;
	delete []zw2;
}