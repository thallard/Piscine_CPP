/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 18:29:32 by thallard          #+#    #+#             */
/*   Updated: 2021/03/23 19:00:29 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout << "\e[32mDefault constructor called\e[0m" << std::endl;
}

Fixed::Fixed(int nb) : value(nb << bits)
{
    std::cout << "\e[32mInteger constructor called\e[0m" << std::endl;
}

Fixed::Fixed(float nb) : value(roundf(nb * (1 << bits)))
{
    std::cout << "\e[32mFloat constructor called\e[0m" << std::endl;
}

Fixed::Fixed(const Fixed &ref)
{
    std::cout << "\e[32mCopy constructor called\e[0m" << std::endl;
    *this = ref;
}

Fixed::~Fixed()
{
    std::cout << "\e[31mDestructor called\e[0m" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &ref)
{
    std::cout << "\e[33mAssignation operator called\e[0m" << std::endl;
    this->value = ref.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &ostream, Fixed const &ref)
{
    ostream << ref.toFloat();
    return ostream;
}

int Fixed::getRawBits() const
{
    return value;
}

int Fixed::toInt(void) const
{
    return (value >> bits);
}

float Fixed::toFloat(void) const
{
    return ((float)value / (float)(1 << bits));
}

void Fixed::setRawBits(int const raw) { value = raw; }