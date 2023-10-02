/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:20:15 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/02 18:14:04 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int intval) : _value(intval << _bf)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float floatval) : _value(roundf(floatval * (1 << _bf)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_value = fixed.getRawBits();
    return (*this);
}

int     Fixed::getRawBits(void) const
{
    return (this->_value);
}

void    Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

float    Fixed::toFloat(void) const
{
    return ((float)this->_value / (1 << this->_bf));
}

int     Fixed::toInt() const
{
    return (this->_value >> this->_bf);
}

std::ostream    &operator<<(std::ostream &os, Fixed const &fixed)
{
    os << fixed.toFloat();
    return (os);
}