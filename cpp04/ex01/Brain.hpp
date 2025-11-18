/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:43:05 by ppassos           #+#    #+#             */
/*   Updated: 2025/10/16 16:56:11 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain &operator=(const Brain &other);
		Brain(const Brain &other);
		~Brain();

		void setIdea(int index, const std::string &idea);
		std::string getIdea(int index) const;
};

#endif