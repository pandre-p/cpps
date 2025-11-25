/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 09:37:24 by ppassos           #+#    #+#             */
/*   Updated: 2025/11/25 11:01:10 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default constructor called" << std::endl;
}
Intern::Intern(const Intern &other)
{
	std::cout << "Intern Copy constructor called" << std::endl;	
	(void)other;
}
Intern &Intern::operator=(const Intern &other)
{
	std::cout << "Intern Copy assignment operator called" << std::endl;
	(void)other;
	return (*this);
}
Intern::~Intern()
{
	std::cout << "Intern Destructor called" << std::endl;
}
AForm* Intern::makeForm(const std::string& formName, const std::string& target)
{
	typedef AForm* (*FormCreator)(const std::string &target);
	
	struct FormType
	{
		std::string name;
		FormCreator creator;
	};
	
	FormType formTypes[] = {
		{"shrubbery creation", &Intern::createShrubberyForm},
		{"robotomy request", &Intern::createRobotomyForm},
		{"presidential pardon", &Intern::createPresidentialForm}
	};
	
	for (int i = 0; i < 3; ++i)
	{
		if (formTypes[i].name == formName)
		{
			std::cout << "Intern creates " << formName << " form." << std::endl;
			return formTypes[i].creator(target);
		}
	}
	
	throw UnknownFormException();
}

AForm	*Intern::createShrubberyForm(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::createRobotomyForm(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::createPresidentialForm(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

const char	*Intern::UnknownFormException::what() const throw()
{
	return ("Unknown form type requested");
}