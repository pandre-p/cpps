/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 08:49:25 by ppassos           #+#    #+#             */
/*   Updated: 2026/03/06 08:49:43 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main()
{
    Data data;
    data.num = 42;

    Data* originalPtr = &data;

    std::cout << "Valor original: " << originalPtr->num << std::endl;
    std::cout << "Endereco original: " << originalPtr << std::endl;

    uintptr_t raw = Serialize::serialize(originalPtr);

    std::cout << "Valor serializado (uintptr_t): " << raw << std::endl;

    Data* newPtr = Serialize::deserialize(raw);

    std::cout << "Endereco desserializado: " << newPtr << std::endl;
    std::cout << "Valor desserializado: " << newPtr->num << std::endl;

    if (newPtr == originalPtr)
        std::cout << "OK: Os ponteiros sao iguais!" << std::endl;
    else
        std::cout << "ERRO: Os ponteiros SAO diferentes!" << std::endl;

    return 0;
}