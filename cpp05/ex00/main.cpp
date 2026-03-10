/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:24:52 by ppassos           #+#    #+#             */
/*   Updated: 2026/03/10 09:35:22 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    try 
    {
        std::cout << "Criando bureaucrat com nome \"Alice\", grade 75\n";
        Bureaucrat a("Alice", 75);
        std::cout << a.getName() << ", grade = " << a.getGrade() << "\n";

        std::cout << "Incrementar grade de Alice\n";
        a.incrementGrade();
        std::cout << "Após incremento: " << a.getName() << ", grade = " << a.getGrade() << "\n";

        std::cout << "Decrementar grade de Alice duas vezes\n";
        a.decrementGrade();
        std::cout << "Após 1º decremento: " << a.getName() << ", grade = " << a.getGrade() << "\n";
        a.decrementGrade();
        std::cout << "Após 2º decremento: " << a.getName() << ", grade = " << a.getGrade() << "\n";

        std::cout << "\nTentando criar bureaucrat inválido (grade 0)\n";
        Bureaucrat b("Bob", 0);
        std::cout << b.getName() << ", grade = " << b.getGrade() << "\n";
    }
    catch (std::exception &e) {
        std::cerr << "Exceção capturada: " << e.what() << "\n";
    }

    std::cout << "\nTestar cópia e operador=\n";
    try {
        Bureaucrat c("Charlie", 149);
        std::cout << "Original: " << c.getName() << ", grade = " << c.getGrade() << "\n";

        Bureaucrat d = c;
        std::cout << "Cópia via copy constructor: " << d.getName() << ", grade = " << d.getGrade() << "\n";

        Bureaucrat e("Eve", 42);
        std::cout << "Outro antes de assign: " << e.getName() << ", grade = " << e.getGrade() << "\n";

        e = c;
        std::cout << "Depois de e = c: " << e.getName() << ", grade = " << e.getGrade() << "\n";

        std::cout << "\nUsando o teu operator<< (método da classe):\n";
        std::cout << e << std::endl;
        std::cout << c << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << "Exceção capturada: " << e.what() << "\n";
    }
    return 0;
}
