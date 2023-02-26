/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:13:24 by jocardos          #+#    #+#             */
/*   Updated: 2023/02/22 20:13:24 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::fractionalBits = 8;

Fixed::Fixed()
{
    this->fixedPointValue = 0;
}

Fixed::Fixed(const int &value)
{
    this->fixedPointValue = (value << fractionalBits);
}

Fixed::Fixed(const float &value)
{
    this->fixedPointValue = roundf(value * (float)(1 << fractionalBits));
}   

int Fixed::getRawBits(void) const
{
    return (this->fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    this->fixedPointValue = raw;
}

int Fixed::toInt(void) const
{
    return (this->fixedPointValue >> fractionalBits);
}

float Fixed::toFloat(void) const
{
    return ((float)this->fixedPointValue / (float)(1 << fractionalBits));
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    if (this != &fixed)
        this->setRawBits(fixed.getRawBits());
    return (*this);
}

bool Fixed::operator>(const Fixed &fixed) const
{
    return (this->fixedPointValue > fixed.fixedPointValue);
}

bool Fixed::operator<(const Fixed &fixed) const
{
    return (this->fixedPointValue < fixed.fixedPointValue);
}

bool Fixed::operator>=(const Fixed &fixed) const
{
    return (this->fixedPointValue >= fixed.fixedPointValue);
}

bool Fixed::operator<=(const Fixed &fixed) const
{
    return (this->fixedPointValue <= fixed.fixedPointValue);
}

bool Fixed::operator==(const Fixed &fixed) const
{
    return (this->fixedPointValue == fixed.fixedPointValue);
}

bool Fixed::operator!=(const Fixed &fixed) const
{
    return (this->fixedPointValue != fixed.fixedPointValue);
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
    return (toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    return (toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
    return (toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    return (toFloat() / fixed.toFloat());
}

Fixed &Fixed::operator++()
{
    this->fixedPointValue++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp;

    tmp = *this;
    this->fixedPointValue++;
    return (tmp);
}

Fixed &Fixed::operator--()
{
    this->fixedPointValue--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
   Fixed tmp;

    tmp = *this;
    this->fixedPointValue--;
    return (tmp);
}

Fixed &Fixed::min(Fixed &nb1, Fixed &nb2)
{
    if (nb1 < nb2)
        return (nb1);
    return (nb2);
}

Fixed const &Fixed::min(const Fixed &nb1, const Fixed &nb2)
{
    if (nb1 < nb2)
        return (nb1);
    return (nb2);
}

Fixed &Fixed::max(Fixed &nb1, Fixed &nb2)
{
    if (nb1 > nb2)
        return (nb1);
    return (nb2);
}

Fixed const &Fixed::max(const Fixed &nb1, const Fixed &nb2)
{
    if (nb1 > nb2)
        return (nb1);
    return (nb2);
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
    out << value.toFloat();
    return (out);
}

Fixed::~Fixed()
{
}