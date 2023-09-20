/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:20:15 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/20 20:20:54 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
}

Fixed::Fixed(int intval) : _value(intval << _bf)
{
}

Fixed::Fixed(float floatval) : _value(roundf(floatval * (1 << _bf)))
{
}

Fixed::Fixed(Fixed const &fixed)
{
    *this = fixed;
}

Fixed::~Fixed(void)
{
}

Fixed   &Fixed::operator=(const Fixed &fixed)
{
    this->_value = fixed.getRawBits();
    return (*this);
}

// Arithmetic operators

Fixed   Fixed::operator+(Fixed const &fixed) const
{
    return (Fixed (this->toFloat() + fixed.toFloat()));
}

Fixed   Fixed::operator-(Fixed const &fixed) const
{
    return (Fixed (this->toFloat() - fixed.toFloat()));
}

Fixed   Fixed::operator*(Fixed const &fixed) const
{
    return (Fixed (this->toFloat() * fixed.toFloat()));
}

Fixed   Fixed::operator/(Fixed const &fixed) const
{
    return (Fixed (this->toFloat() / fixed.toFloat()));
}

// Comparison operators

bool    Fixed::operator>(Fixed const &fixed) const
{
    return (this->_value > fixed._value);
}

bool    Fixed::operator<(Fixed const &fixed) const
{
    return (this->_value < fixed._value);
}

bool    Fixed::operator>=(Fixed const &fixed) const
{
    return (this->_value >= fixed._value);
}

bool    Fixed::operator<=(Fixed const &fixed) const
{
    return (this->_value <= fixed._value);
}

bool    Fixed::operator==(Fixed const &fixed) const
{
    return (this->_value == fixed._value);
}

bool    Fixed::operator!=(Fixed const &fixed) const
{
    return (this->_value != fixed._value);
}

//Increment and decrement operators

Fixed   &Fixed::operator++(void)
{
    this->_value++;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed   tmp(*this);
    this->_value++;
    return (tmp);
}

Fixed   &Fixed::operator--(void)
{
    this->_value--;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed   tmp(*this);
    this->_value--;
    return (tmp);
}

// Min & max functions

Fixed   &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
    if(fixed1 > fixed2)
        return(fixed2);
    return(fixed1);
}

const Fixed   &Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
    if(fixed1 > fixed2)
        return(fixed2);
    return(fixed1);
}

Fixed   &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
    if(fixed1 < fixed2)
        return(fixed2);
    return(fixed1);
}

const Fixed   &Fixed::max(Fixed const &fixed1, Fixed const &fixed2)
{
    if(fixed1 < fixed2)
        return(fixed2);
    return(fixed1);
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