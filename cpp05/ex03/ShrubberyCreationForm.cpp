/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:04:28 by ppassos           #+#    #+#             */
/*   Updated: 2026/03/14 15:46:57 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ShrubberyCreationForm: Required grades: sign 145, exec 137
Creates a file <target>_shrubbery in the working directory and writes ASCII trees
inside it
*/
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShruberryCreationForm", 145, 137)
{
	std::cout <<  "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShruberryCreationForm", 145, 137), _target(target)
{
	std::cout <<  "ShrubberyCreationForm parameterized constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other)
{
	std::cout <<  "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	std::cout <<  "ShrubberyCreationForm copy assignment operator called" << std::endl;
	if (this != &other)
	{
		AForm::operator=(other);
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout <<  "ShrubberyCreationForm destructor called" << std::endl;
}

const std::string	&ShrubberyCreationForm::get_target() const
{
	return(_target);
}

void ShrubberyCreationForm::execute_action() const
{
	std::ofstream outfile((this->_target + "_shrubbery").c_str());
	if (!outfile)
	{
		std::cerr << "Error creating file: " << this->_target + "_shrubbery" << std::endl;
		return;
	}
	outfile << "       _-_\n"
			   "    /~~   ~~\\\n"
			   " /~~         ~~\\\n"
			   "{               }\n"
			   " \\  _-     -_  /\n"
			   "   ~  \\\\ //  ~\n"
			   "_- -   | | _- _\n"
			   "  _ -  | |   -_\n"
			   "      // \\\\\n";
	outfile.close();
}

const char	*ShrubberyCreationForm::FileException::what() const throw()
{
	return("Could not create shrubbery file");
}