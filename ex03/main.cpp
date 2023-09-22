/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:12:28 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/22 20:45:22 by crigonza         ###   ########.fr       */
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

    std::cout << "The point is " << (bsp(a, b, c, pointIn) ? "in" : "out");
    std::cout << std::endl;
    std::cout << "The point is " << (bsp(a, b, c, pointOut) ? "in" : "out");
    std::cout << std::endl;
    std::cout << "The point is " << (bsp(a, b, c, pointBorder) ? "in" : "out");
    std::cout << std::endl;
    
    return (0);
}