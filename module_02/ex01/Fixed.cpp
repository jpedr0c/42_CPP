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
    std::cout << "Default constructor called\n";
    this->fixedPointValue = 0;
}

Fixed::Fixed(const int &value)
{
    std::cout << "Int constructor called\n";
    this->fixedPointValue = (value << fractionalBits);
}

Fixed::Fixed(const float &value)
{
    std::cout << "Float constructor called\n";
    this->fixedPointValue = roundf(value * (float)(1 << fractionalBits));
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called\n";
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignation operator called\n";
    if (this != &fixed)
        this->setRawBits(fixed.getRawBits());
    return (*this);
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

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
    out << value.toFloat();
    return (out);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
    return ;
}