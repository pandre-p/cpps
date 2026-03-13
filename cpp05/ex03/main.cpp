/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:24:52 by ppassos           #+#    #+#             */
/*   Updated: 2026/03/13 16:07:36 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
    std::cout << "=== Test Intern ===" << std::endl;

    Intern someRandomIntern;

    // Teste 1: RobotomyRequestForm
    std::cout << "\n=== Test 1: Create RobotomyRequestForm ===" << std::endl;
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
    std::cout << "\n=== Teste 2: Create ShrubberyCreationForm ===" << std::endl;
    AForm* f2 = NULL;
    try
    {
        f2 = someRandomIntern.makeForm("shrubbery creation", "home");
        std::cout << *f2 << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    if (f2)
        delete f2;

    // Teste 3: PresidentialPardonForm
    std::cout << "\n=== Teste 3: Create PresidentialPardonForm ===" << std::endl;
    AForm* f3 = NULL;
    try
    {
        f3 = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");
        std::cout << *f3 << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    if (f3)
        delete f3;

    // Teste 4: Formulário inválido
    std::cout << "\n=== Test 4: Invalid name ===" << std::endl;
    AForm* f4 = NULL;
    try
    {
        f4 = someRandomIntern.makeForm("non-existent form", "nothing");
        std::cout << *f4 << std::endl;
    }
    catch (const Intern::UnknownFormException &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    if (f4)
        delete f4;

    std::cout << "\n=== End of Intern tests ===" << std::endl;
    return 0;
}

