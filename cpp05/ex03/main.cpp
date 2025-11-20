/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:24:52 by ppassos           #+#    #+#             */
/*   Updated: 2025/11/20 11:25:14 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
    Intern  someRandomIntern;

    std::cout << "\n=== Teste 1: Criar RobotomyRequestForm ===" << std::endl;
    AForm* f1 = someRandomIntern.makeForm("robotomy request", "Bender");
    if (f1)
        delete f1;

    std::cout << "\n=== Teste 2: Criar ShrubberyCreationForm ===" << std::endl;
    AForm* f2 = someRandomIntern.makeForm("shrubbery creation", "home");
    if (f2)
        delete f2;

    std::cout << "\n=== Teste 3: Criar PresidentialPardonForm ===" << std::endl;
    AForm* f3 = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");
    if (f3)
        delete f3;

    std::cout << "\n=== Teste 4: Nome inválido ===" << std::endl;
    AForm* f4 = someRandomIntern.makeForm("form inexistente", "nada");
    if (f4)
        delete f4;

    std::cout << "\n=== Fim dos testes ===" << std::endl;
}
