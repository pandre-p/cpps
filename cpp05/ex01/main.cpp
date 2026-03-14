/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:24:52 by ppassos           #+#    #+#             */
/*   Updated: 2026/03/14 14:56:28 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

int main()
/*{
    try
    {
        Bureaucrat bob("Bob", 50);
        Bureaucrat alice("Alice", 1);

        std::cout << bob << std::endl;
        std::cout << alice << std::endl;
        
        Form FormA("FormA", 45, 30);  // precisa de grau 45 para assinar
        Form FormB("FormB", 1, 1);    // precisa de grau 1 para assinar

        std::cout << FormA << std::endl;
        std::cout << FormB << std::endl;

        bob.SignForm(FormA);
        alice.SignForm(FormA);
        bob.incrementGrade(); // 50 -> 49
        std::cout << bob << std::endl;
        try
        {
            Form invalidAForm("InvalidAForm", 0, 10);
        }
        catch (const std::exception &e)
        {
            std::cerr << "It was not possible to create the AForm.: " << e.what() << std::endl;
        }
        try
        {
            Form invalidAForm2("InvalidAForm2", 151, 10);
        }
        catch (const std::exception &e)
        {
            std::cerr << "Unable to create AForm: " << e.what() << std::endl;
        }
        std::cout << FormA << std::endl;
        std::cout << FormB << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Unexpected error: " << e.what() << std::endl;
    }

    return 0;
}*/
{
    std::cout << "----- CREATE OBJECTS -----" << std::endl;

    Bureaucrat bob("Bob", 50);
    Form tax("TaxForm", 45, 30);

    std::cout << bob << std::endl;
    std::cout << tax << std::endl;

    std::cout << "\n----- TRY SIGN (FAIL) -----" << std::endl;

    bob.signForm(tax);   // grade 50 não pode assinar (precisa 45)

    std::cout << tax << std::endl;

    std::cout << "\n----- STRONGER BUREAUCRAT -----" << std::endl;

    Bureaucrat boss("Boss", 40);

    std::cout << boss << std::endl;

    std::cout << "\n----- TRY SIGN (SUCCESS) -----" << std::endl;

    boss.signForm(tax);

    std::cout << tax << std::endl;

    std::cout << "\n----- TEST beSigned DIRECTLY -----" << std::endl;

    try
    {
        Form contract("Contract", 20, 10);
        Bureaucrat intern("Intern", 100);

        contract.beSigned(intern);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n----- TEST INVALID FORM GRADES -----" << std::endl;

    try
    {
        Form invalid("BadForm", 0, 20);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        Form invalid2("BadForm2", 20, 200);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
