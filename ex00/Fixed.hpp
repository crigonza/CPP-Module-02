/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:21:00 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/14 20:05:42 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FIXED_HPP

#define FIXED_HPP

class Fixed
{
    private:
        int                 _value;
        static const int    _bit = 8;
    public:
        Fixed();
        Fixed(Fixed const &fixed);
        ~Fixed();
        Fixed &operator=(Fixed const &fixed);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif