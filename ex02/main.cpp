/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:12:28 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/02 19:50:11 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



int     main( void ) 
{
    Fixed       a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed       c(5.5f);
    Fixed       d(2.5f);  

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;

    std::cout << std::endl;
    std::cout << "Arithmetic operators" << std::endl;
    std::cout << "5.5 + 2.5 = " << c + d << std::endl;
    std::cout << "5.5 - 2.5 = " << c - d << std::endl;
    std::cout << "5.5 * 2.5 = " << c * d << std::endl;
    std::cout << "5.5 / 2.5 = " << c / d << std::endl;

    std::cout << std::endl;
    std::cout << "Comparison operators" << std::endl;
    std::cout << "5.5 > 2.5? " << (a > b) << std::endl;
    std::cout << "5.5 < 2.5? " << (a < b) << std::endl;
    std::cout << "5.5 >= 2.5? " << (a >= b) << std::endl;
    std::cout << "5.5 <= 2.5? " << (a <= b) << std::endl;
    std::cout << "5.5 == 2.5? " << (a == b) << std::endl;
    std::cout << "5.5 != 2.5? " << (a != b) << std::endl;
    
    return (0);
}