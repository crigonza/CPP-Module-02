/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:12:28 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/02 20:03:38 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int     main( void ) 
{
    Point a(0.0f, 0.0f);
    Point b (0.0f, 1.0f);
    Point c (1.0f, 0.0f);
    Point pointIn(0.3f, 0.3f);
    Point pointOut(0.8f, 0.8f);
    Point pointBorder(0.5f, 0.5f);

    std::cout << "The triangle vertices are: a(0.0, 0.0), b(0.0, 1.0), c(1.0, 0.0)";
    std::cout << std::endl;
    std::cout << "The point 0.3, 0.3 is " << (bsp(a, b, c, pointIn) ? "in" : "out");
    std::cout << std::endl;
    std::cout << "The point 0.8, 0.8 is " << (bsp(a, b, c, pointOut) ? "in" : "out");
    std::cout << std::endl;
    std::cout << "The point 0.5, 0.5 is " << (bsp(a, b, c, pointBorder) ? "in" : "out");
    std::cout << std::endl;
    
    return (0);
}