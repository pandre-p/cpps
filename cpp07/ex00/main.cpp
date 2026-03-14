/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 08:50:32 by ppassos           #+#    #+#             */
/*   Updated: 2026/03/14 16:36:12 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Implement the following function templates:
• swap: Swaps the values of two given parameters. Does not return anything.
• min: Compares the two values passed as parameters and returns the smallest one.
If they are equal, it returns the second one.
• max: Compares the two values passed as parameters and returns the greatest one.
If they are equal, it returns the second one
*/

#include "whatever.hpp"
int main( void ) 
{
int a = 9;
int b = 2;
swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "plane";
std::string d = "house";
swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
float f1 = 3.14f, f2 = 2.71f;
swap(f1,f2);
std::cout << "swap(f1,f2) -> f1=" << f1 << ", f2=" << f2 << std::endl;
std::cout << "min(f1,f2)=" << min(f1,f2) << std::endl;
std::cout << "max(f1,f2)=" << max(f1,f2) << std::endl;
return 0;
}