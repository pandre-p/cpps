/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:08:31 by ppassos           #+#    #+#             */
/*   Updated: 2025/11/25 10:41:13 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("Default"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{
	std::cout << "AForm Default constructor called" << std::endl;
}
AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	std::cout << "AForm Parameterized constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}
AForm::AForm(const AForm &other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
	std::cout << "AForm Copy constructor called" << std::endl;
}
AForm	&AForm::operator=(const AForm &other)
{
	std::cout << "AForm Copy assignment operator called" << std::endl;
	if (this != &other)
		this->isSigned = other.isSigned;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const AForm& AForm)
{
	os << "AForm Name: " << AForm.getName() << ", Signed: " << (AForm.getIsSigned() ? "Yes" : "No")
	   << ", Grade to Sign: " << AForm.getGradeToSign() << ", Grade to Execute: " << AForm.getGradeToExecute();
	return os;
}

AForm::~AForm()
{
	std::cout << "AForm Destructor called" << std::endl;
}

const std::string& AForm::getName() const
{
	return (this->name);
}

bool AForm::getIsSigned() const
{
	return (this->isSigned);
}

int AForm::getGradeToSign() const
{
	return (this->gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (this->gradeToExecute);
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeToSign)
		throw GradeTooLowException();
	this->isSigned = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high! (maximum grade is 1)");
}


const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low! (minimum grade is 150)");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("AForm is not signed!");
}
