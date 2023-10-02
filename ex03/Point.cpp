/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:26:10 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/02 20:07:38 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0))
{
}

Point::Point(Point const &point) : _x(point._x), _y(point._y)
{
}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{
}

Point::~Point(void)
{
}

Point   &Point::operator=(Point const &point)
{
    (Fixed)this->_x = point._x;
    (Fixed)this->_y = point._y;
    return (*this);
}

Fixed   Point::get_x(void) const
{
    return (this->_x);
}

Fixed   Point::get_y(void) const
{
    return (this->_y);
}