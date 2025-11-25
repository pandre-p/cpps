/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:08:31 by ppassos           #+#    #+#             */
/*   Updated: 2025/11/25 11:09:20 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{
	std::cout << "Form Default constructor called" << std::endl;
}
Form::Form(const std::string& name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	std::cout << "Form Parameterized constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}
Form::Form(const Form &other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
	std::cout << "Form Copy constructor called" << std::endl;
}
Form	&Form::operator=(const Form &other)
{
	std::cout << "Form Copy assignment operator called" << std::endl;
	if (this != &other)
		this->isSigned = other.isSigned;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Form& Form)
{
	os << "Form Name: " << Form.getName() << ", Signed: " << (Form.getIsSigned() ? "Yes" : "No")
	   << ", Grade to Sign: " << Form.getGradeToSign() << ", Grade to Execute: " << Form.getGradeToExecute();
	return os;
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

const std::string& Form::getName() const
{
	return (this->name);
}

bool Form::getIsSigned() const
{
	return (this->isSigned);
}

int Form::getGradeToSign() const
{
	return (this->gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (this->gradeToExecute);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeToSign)
		throw GradeTooLowException();
	this->isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high! (maximum grade is 1)");
}


const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low! (minimum grade is 150)");
}

const char* Form::FormNotSignedException::what() const throw()
{
	return ("Form is not signed!");
}
