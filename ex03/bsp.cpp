/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:26:44 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/02 20:07:28 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed   det, alpha, beta, gamma;  

    det = (b.get_y() - c.get_y()) * (a.get_x() - c.get_x()) \
        + (c.get_x() - b.get_x()) * (a.get_y() - c.get_y());
    alpha = ((b.get_y() - c.get_y()) * (point.get_x() - c.get_x()) \
        + (c.get_x() - b.get_x()) * (point.get_y() - c.get_y())) / det;
    beta = ((c.get_y() - a.get_y()) * (point.get_x() - c.get_x()) \
        + (a.get_x() - c.get_x()) * (point.get_y() - c.get_y())) / det;
    gamma = Fixed(1.0f) - alpha - beta;

    return (alpha > Fixed(0.0f) && beta > Fixed(0.0f) && gamma > Fixed(0.0f));
}