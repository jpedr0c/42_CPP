/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:02:31 by jocardos          #+#    #+#             */
/*   Updated: 2023/02/22 20:02:31 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixedPointValue;
        static const int fractionalBits;
    public:
        Fixed();
        Fixed(const int &value);
        Fixed(const float &value);
        Fixed(const Fixed &fixed);
        Fixed &operator=(const Fixed &fixed);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

        bool operator>(const Fixed &fixed) const;
        bool operator<(const Fixed &fixed) const;
        bool operator>=(const Fixed &fixed) const;
        bool operator<=(const Fixed &fixed) const;
        bool operator==(const Fixed &fixed) const;
        bool operator!=(const Fixed &fixed) const;

        Fixed operator+(const Fixed &fixed) const;
        Fixed operator-(const Fixed &fixed) const;
        Fixed operator*(const Fixed &fixed) const;
        Fixed operator/(const Fixed &fixed) const;

        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);

        static Fixed &min(Fixed &nb1, Fixed &nb2);
        static const Fixed &min(const Fixed &nb1, const Fixed &nb2);
        static Fixed &max(Fixed &nb1, Fixed &nb2);
        static const Fixed &max(const Fixed &nb1, const Fixed &nb2);

};

std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif