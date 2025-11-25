/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:24:52 by ppassos           #+#    #+#             */
/*   Updated: 2025/11/25 11:27:35 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <iostream>

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
    std::cout << "=== CPP05 ex03: Teste Intern ===" << std::endl;

    Intern someRandomIntern;

    // Teste 1: RobotomyRequestForm
    std::cout << "\n=== Teste 1: Criar RobotomyRequestForm ===" << std::endl;
    AForm* f1 = NULL;
    try
    {
        f1 = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << *f1 << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Erro: " << e.what() << std::endl;
    }
    if (f1)
        delete f1;

    // Teste 2: ShrubberyCreationForm
    std::cout << "\n=== Teste 2: Criar ShrubberyCreationForm ===" << std::endl;
    AForm* f2 = NULL;
    try
    {
        f2 = someRandomIntern.makeForm("shrubbery creation", "home");
        std::cout << *f2 << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Erro: " << e.what() << std::endl;
    }
    if (f2)
        delete f2;

    // Teste 3: PresidentialPardonForm
    std::cout << "\n=== Teste 3: Criar PresidentialPardonForm ===" << std::endl;
    AForm* f3 = NULL;
    try
    {
        f3 = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");
        std::cout << *f3 << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Erro: " << e.what() << std::endl;
    }
    if (f3)
        delete f3;

    // Teste 4: Formulário inválido
    std::cout << "\n=== Teste 4: Nome inválido ===" << std::endl;
    AForm* f4 = NULL;
    try
    {
        f4 = someRandomIntern.makeForm("form inexistente", "nada");
        std::cout << *f4 << std::endl;
    }
    catch (const Intern::UnknownFormException &e)
    {
        std::cerr << "Erro: " << e.what() << std::endl;
    }
    if (f4)
        delete f4;

    std::cout << "\n=== Fim dos testes Intern ===" << std::endl;
    return 0;
}

