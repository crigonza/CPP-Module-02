/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:21:00 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/02 18:14:11 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int                 _value;
        static const int    _bf = 8;
    public:
        Fixed();
        Fixed(const int intval);
        Fixed(const float floatval);
        Fixed(Fixed const &fixed);
        ~Fixed();
        Fixed   &operator=(Fixed const &fixed);
        
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream     &operator<<(std::ostream &os ,Fixed const &fixed);

#endif