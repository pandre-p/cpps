/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 08:49:36 by ppassos           #+#    #+#             */
/*   Updated: 2026/03/06 08:49:45 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <stdint.h>

#ifndef SERIALIZE_H
# define SERIALIZE_H

struct Data
{
	int	num;
};

class Serialize
{
	private:
		Serialize();
		Serialize(const Serialize &other);
		Serialize	&operator=(const Serialize &other);
		~Serialize();
		
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*    deserialize(uintptr_t raw);
};

#endif