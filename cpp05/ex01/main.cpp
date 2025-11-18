/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:24:52 by ppassos           #+#    #+#             */
/*   Updated: 2025/11/18 16:37:29 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
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

        // Criar formulários
        Form formA("FormA", 45, 30);  // precisa de grau 45 para assinar
        Form formB("FormB", 1, 1);    // precisa de grau 1 para assinar

        std::cout << formA << std::endl;
        std::cout << formB << std::endl;

        // Bob tenta assinar formA (deve falhar, grade muito baixa)
        try
        {
            formA.beSigned(bob);
            std::cout << bob.getName() << " assinou " << formA.getName() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << "Erro: " << bob.getName() << " não conseguiu assinar "
                      << formA.getName() << " porque: " << e.what() << std::endl;
        }

        // Alice tenta assinar formA (deve funcionar)
        try
        {
            formA.beSigned(alice);
            std::cout << alice.getName() << " assinou " << formA.getName() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }

        // Testar incremento/decremento de grade
        bob.incrementGrade(); // 50 -> 49
        std::cout << bob << std::endl;

        // Criar formulário inválido (GradeTooHigh)
        try
        {
            Form invalidForm("InvalidForm", 0, 10);
        }
        catch (const std::exception &e)
        {
            std::cerr << "Não foi possível criar formulário: " << e.what() << std::endl;
        }

        // Criar formulário inválido (GradeTooLow)
        try
        {
            Form invalidForm2("InvalidForm2", 151, 10);
        }
        catch (const std::exception &e)
        {
            std::cerr << "Não foi possível criar formulário: " << e.what() << std::endl;
        }

        // Imprimir estado final
        std::cout << formA << std::endl;
        std::cout << formB << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Erro inesperado: " << e.what() << std::endl;
    }

    return 0;
}
