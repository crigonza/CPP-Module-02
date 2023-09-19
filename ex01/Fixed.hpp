/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:21:00 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/19 11:02:24 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#ifndef FIXED_HPP

#define FIXED_HPP

class Fixed
{
    private:
        int                 _value;
        static const int    _bit = 8;
    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(Fixed const &fixed);
        ~Fixed();
        Fixed &operator=(Fixed const &fixed);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float    toFloat(void) const;
        int     toInt(void) const;
};

ostream     &operator<<(ostream &o ,const Fixed &nbr)
{

}

#endif