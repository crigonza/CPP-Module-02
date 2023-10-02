/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:24:45 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/02 20:06:11 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const _x;
        Fixed const _y;
    public:
        Point();
        Point(Point const &point);
        Point(const float x, const float y);
        ~Point();

        Point &operator=(Point const &point);

        Fixed   get_x(void) const;
        Fixed   get_y(void) const;
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif