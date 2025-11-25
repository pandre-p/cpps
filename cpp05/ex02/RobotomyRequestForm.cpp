/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:05:53 by ppassos           #+#    #+#             */
/*   Updated: 2025/11/25 11:16:36 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
RobotomyRequestForm: Required grades: sign 72, exec 45
Makes some drilling noises, then inForms that <target> has been robotomized
successfully 50% of the time. Otherwise, it inForms that the robotomy failed.
*/
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("default")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm parameterized constructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other), _target(other._target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	if (this != &other)
	{
		Form::operator=(other);
		this->_target = other._target;
	}
	return *this;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!this->getIsSigned())
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	std::cout << "Brrrrr... Bzzzz... (drilling noises)" << std::endl;

	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "The robotomy on " << this->_target << " has failed." << std::endl;
}