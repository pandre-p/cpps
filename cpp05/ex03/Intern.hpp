/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 09:37:28 by ppassos           #+#    #+#             */
/*   Updated: 2025/11/25 10:54:44 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:

		static AForm	*createShrubberyForm(const std::string &target);
		static AForm	*createRobotomyForm(const std::string &target);
		static AForm	*createPresidentialForm(const std::string &target);
		
	
	public:
		Intern();
		Intern(const Intern &other);
		Intern &operator=(const Intern &other);
		~Intern();

		AForm* makeForm(const std::string& FormName, const std::string& target);
		class UnknownFormException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#endif