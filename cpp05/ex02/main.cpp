/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:24:52 by ppassos           #+#    #+#             */
/*   Updated: 2026/03/10 10:01:45 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// para testar os 50/50
//[
#include <cstdlib>
#include <ctime>
//]


int main()
{
    //[
    std::srand(std::time(NULL));
    //]
    
    try
    {
        Bureaucrat bob("Bob", 1);
        Bureaucrat jim("Jim", 150);

        std::cout << "\n=== Teste 1: ShrubberyCreationForm ===" << std::endl;
        ShrubberyCreationForm shrub("home");
        std::cout << shrub << std::endl;

        shrub.beSigned(bob);   // Bob assina
        shrub.execute(bob);    // Bob executa

        std::cout << "\n=== Teste 2: RobotomyRequestForm ===" << std::endl;
        RobotomyRequestForm robot("Bender");
        robot.beSigned(bob);
        for (int i = 0; i < 5; ++i)
            robot.execute(bob);  // Testa várias execuções

        std::cout << "\n=== Teste 3: PresidentialPardonForm ===" << std::endl;
        PresidentialPardonForm pardon("Arthur Dent");
        pardon.beSigned(bob);
        pardon.execute(bob);

        std::cout << "\n=== Teste 4: Tentativa com grade baixa ===" << std::endl;
        ShrubberyCreationForm failForm("fail");
        failForm.beSigned(jim);   // Jim tem grade muito baixa
        failForm.execute(jim);    // Deve lançar exceção
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n=== Fim dos testes ===" << std::endl;
    return 0;
}
