/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:08:36 by ppassos           #+#    #+#             */
/*   Updated: 2026/03/10 09:59:19 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AForm_HPP
#define AForm_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class AForm
{
	private :
		const std::string name;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;
	public :
		AForm();
		AForm(const std::string& name,  int gradeToSign,  int gradeToExecute);
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);
		~AForm();
		
		const std::string& getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(const class Bureaucrat &bureaucrat);
		void execute(const Bureaucrat &executor) const;
		// to make pure virtual abstract
		virtual void	execute_action() const = 0;
		
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
		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};
std::ostream& operator<<(std::ostream& os, const AForm& AForm);

#endif