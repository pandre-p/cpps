/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:24:52 by ppassos           #+#    #+#             */
/*   Updated: 2026/03/14 15:40:54 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// para testar os 50/50
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
    std::cout << "----- CREATE BUREAUCRATS -----" << std::endl;
    Bureaucrat bob("Bob", 145);    // grade baixa
    Bureaucrat boss("Boss", 1);    // grade alta

    std::cout << bob << std::endl;
    std::cout << boss << std::endl;

    std::cout << "\n----- CREATE SHRUBBERY FORM -----" << std::endl;
    ShrubberyCreationForm form("home"); // target = "home"
    std::cout << form << std::endl;

    std::cout << "\n----- TRY SIGN (FAIL) -----" << std::endl;
    bob.signForm(form);  // deve falhar, grade 145 < gradeToSign 145?

    std::cout << form << std::endl;

    std::cout << "\n----- TRY SIGN (SUCCESS) -----" << std::endl;
    boss.signForm(form); // deve passar
    std::cout << form << std::endl;

    std::cout << "\n----- TRY EXECUTE (FAIL) -----" << std::endl;
    try
    {
        bob.executeForm(form); // grade 145, deve falhar
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n----- TRY EXECUTE (SUCCESS) -----" << std::endl;
    try
    {
        boss.executeForm(form); // grade 1, deve passar
        std::cout << "ShrubberyCreationForm executed successfully!" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
