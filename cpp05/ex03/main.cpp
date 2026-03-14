/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:24:52 by ppassos           #+#    #+#             */
/*   Updated: 2026/03/14 16:00:00 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

// para testar os 50/50
#include <iostream>
#include <cstdlib>
#include <ctime>


int main()
/*{
    //test 50/50
    std::srand(std::time(NULL));
    try
    {
        Bureaucrat bob("Bob", 1);
        Bureaucrat jim("Jim", 150);

        std::cout << "\n=== Test 1: ShrubberyCreationForm ===" << std::endl;
        ShrubberyCreationForm shrub("home");
        std::cout << shrub << std::endl;

        shrub.beSigned(bob);   // Bob assina
        shrub.execute(bob);    // Bob executa

        std::cout << "\n=== Test 2: RobotomyRequestForm ===" << std::endl;
        RobotomyRequestForm robot("Bender");
        robot.beSigned(bob);
        for (int i = 0; i < 5; ++i)
            robot.execute(bob);  // Testa várias execuções

        std::cout << "\n=== Test 3: PresidentialPardonForm ===" << std::endl;
        PresidentialPardonForm pardon("Arthur Dent");
        pardon.beSigned(bob);
        pardon.execute(bob);

        std::cout << "\n=== Test 4: Attempt with low grade ===" << std::endl;
        ShrubberyCreationForm failForm("fail");
        failForm.beSigned(jim);   // Jim tem grade muito baixa
        failForm.execute(jim);    // Deve lançar exceção
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n=== End of tests ===" << std::endl;
    return 0;
}*/
{
    std::srand(std::time(0)); // para resultados randômicos do robotomy

    std::cout << "----- CREATE BUREAUCRATS -----\n";
    Bureaucrat boss("Boss", 1);       // grade alta
    Bureaucrat intern("Intern", 150); // grade baixa

    std::cout << boss << std::endl;
    std::cout << intern << std::endl;

    std::cout << "\n----- CREATE FORMS -----\n";
    RobotomyRequestForm robot("Target");
    PresidentialPardonForm pardon("Marvin");

    std::cout << robot << std::endl;
    std::cout << pardon << std::endl;

    std::cout << "\n----- INTERN TRY SIGN (SHOULD FAIL) -----\n";
    intern.signForm(robot);
    intern.signForm(pardon);

    std::cout << "\n----- INTERN TRY EXECUTE (SHOULD FAIL) -----\n";
    try { intern.executeForm(robot); } catch (std::exception &e) { std::cout << intern.getName() << " couldn't execute RobotomyRequestForm because " << e.what() << std::endl; }
    try { intern.executeForm(pardon); } catch (std::exception &e) { std::cout << intern.getName() << " couldn't execute PresidentialPardonForm because " << e.what() << std::endl; }

    std::cout << "\n----- BOSS SIGN FORMS (SHOULD SUCCEED) -----\n";
    boss.signForm(robot);
    boss.signForm(pardon);

    std::cout << "\n----- BOSS EXECUTE FORMS (SHOULD SUCCEED) -----\n";
    boss.executeForm(robot);
    boss.executeForm(pardon);

    return 0;
}