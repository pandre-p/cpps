/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:24:52 by ppassos           #+#    #+#             */
/*   Updated: 2025/11/25 10:43:50 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

int main()
{
    try
    {
        // Criar burocratas
        Bureaucrat bob("Bob", 50);
        Bureaucrat alice("Alice", 1);

        std::cout << bob << std::endl;
        std::cout << alice << std::endl;

        // Criar AFormulários
        AForm AFormA("AFormA", 45, 30);  // precisa de grau 45 para assinar
        AForm AFormB("AFormB", 1, 1);    // precisa de grau 1 para assinar

        std::cout << AFormA << std::endl;
        std::cout << AFormB << std::endl;

        // Bob tenta assinar AFormA (deve falhar, grade muito baixa)
        try
        {
            AFormA.beSigned(bob);
            std::cout << bob.getName() << " assinou " << AFormA.getName() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << "Erro: " << bob.getName() << " não conseguiu assinar "
                      << AFormA.getName() << " porque: " << e.what() << std::endl;
        }

        // Alice tenta assinar AFormA (deve funcionar)
        try
        {
            AFormA.beSigned(alice);
            std::cout << alice.getName() << " assinou " << AFormA.getName() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }

        // Testar incremento/decremento de grade
        bob.incrementGrade(); // 50 -> 49
        std::cout << bob << std::endl;

        // Criar AFormulário inválido (GradeTooHigh)
        try
        {
            AForm invalidAForm("InvalidAForm", 0, 10);
        }
        catch (const std::exception &e)
        {
            std::cerr << "Não foi possível criar AFormulário: " << e.what() << std::endl;
        }

        // Criar AFormulário inválido (GradeTooLow)
        try
        {
            AForm invalidAForm2("InvalidAForm2", 151, 10);
        }
        catch (const std::exception &e)
        {
            std::cerr << "Não foi possível criar AFormulário: " << e.what() << std::endl;
        }

        // Imprimir estado final
        std::cout << AFormA << std::endl;
        std::cout << AFormB << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Erro inesperado: " << e.what() << std::endl;
    }

    return 0;
}
