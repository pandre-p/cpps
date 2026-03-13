/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:24:52 by ppassos           #+#    #+#             */
/*   Updated: 2026/03/13 15:58:25 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    try 
    {
        std::cout << "Creating a bureaucrat with a name \"Alice\", grade 75\n";
        Bureaucrat a("Alice", 75);
        std::cout << a.getName() << ", grade = " << a.getGrade() << "\n";

        std::cout << "Incrementar grade de Alice\n";
        a.incrementGrade();
        std::cout << "After increment: " << a.getName() << ", grade = " << a.getGrade() << "\n";

        std::cout << "Decrease Alice's grade twice\n";
        a.decrementGrade();
        std::cout << "After the first decrement: " << a.getName() << ", grade = " << a.getGrade() << "\n";
        a.decrementGrade();
        std::cout << "After the 2nd decrement: " << a.getName() << ", grade = " << a.getGrade() << "\n";

        std::cout << "\nAttempting to create invalid bureaucrat (grade 0)\n";
        Bureaucrat b("Bob", 0);
        std::cout << b.getName() << ", grade = " << b.getGrade() << "\n";
    }
    catch (std::exception &e) 
    {
        std::cerr << "Exception caught: " << e.what() << "\n";
    }

    std::cout << "\nTest copy and operator=\n";
    try 
    {
        Bureaucrat c("Charlie", 149);
        std::cout << "Original: " << c.getName() << ", grade = " << c.getGrade() << "\n";

        Bureaucrat d = c;
        std::cout << "Copy via Copy Constructor: " << d.getName() << ", grade = " << d.getGrade() << "\n";

        Bureaucrat e("Eve", 42);
        std::cout << "Another one before assign: " << e.getName() << ", grade = " << e.getGrade() << "\n";

        e = c;
        std::cout << "After e = c: " << e.getName() << ", grade = " << e.getGrade() << "\n";

        std::cout << "\nUsing your operator << (class method):\n";
        std::cout << e << std::endl;
        std::cout << c << std::endl;
    }
    catch (std::exception &e) 
    {
        std::cerr << "Exception caught: " << e.what() << "\n";
    }
    return 0;
}
