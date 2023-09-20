/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:21:00 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/20 20:13:07 by crigonza         ###   ########.fr       */
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
        Fixed   operator+(Fixed const &fixed) const;
        Fixed   operator-(Fixed const &fixed) const;
        Fixed   operator*(Fixed const &fixed) const;
        Fixed   operator/(Fixed const &fixed) const;

        bool    operator>(Fixed const &fixed) const;
        bool    operator<(Fixed const &fixed) const;
        bool    operator>=(Fixed const &fixed) const;
        bool    operator<=(Fixed const &fixed) const;
        bool    operator==(Fixed const &fixed) const;
        bool    operator!=(Fixed const &fixed) const;

        Fixed   &operator++(void);
        Fixed   operator++(int);
        Fixed   &operator--(void);
        Fixed   operator--(int);

        static Fixed   &min(Fixed &fixed1, Fixed &fixed2);
        static Fixed const  &min(Fixed const &fixed1, Fixed const &fixed2);
        static Fixed   &max(Fixed &fixed1, Fixed &fixed2);
        static const Fixed   &max(Fixed const &fixed1, Fixed const &fixed2);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream     &operator<<(std::ostream &os ,Fixed const &fixed);

#endif