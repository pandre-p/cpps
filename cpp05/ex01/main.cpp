/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:24:52 by ppassos           #+#    #+#             */
/*   Updated: 2026/03/13 16:00:06 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

int main()
{
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
        try
        {
            FormA.beSigned(bob);
            std::cout << bob.getName() << " signed " << FormA.getName() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << "Error: " << bob.getName() << " couldn't sign "
                      << FormA.getName() << " because: " << e.what() << std::endl;
        }
        try
        {
            FormA.beSigned(alice);
            std::cout << alice.getName() << " signed " << FormA.getName() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
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
}
