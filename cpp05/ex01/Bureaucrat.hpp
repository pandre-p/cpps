/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:24:47 by ppassos           #+#    #+#             */
/*   Updated: 2026/03/14 14:57:09 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
class Form;

class Bureaucrat
{
private:
	std::string const name;
	int grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();
	
	std::string const getName() const;
	int getGrade() const;
	
	void incrementGrade();
	void decrementGrade();
	void signForm(Form &form);
	class GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
	class GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif