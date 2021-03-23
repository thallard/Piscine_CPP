/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:46:30 by thallard          #+#    #+#             */
/*   Updated: 2021/03/23 18:17:28 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout << "\e[32mDefault constructor called\e[0m" << std::endl;
}

Fixed::Fixed(int nb) : value(nb) {}

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

int Fixed::getRawBits() const
{
    std::cout << "\e[33mgetRawBits function called\e[0m" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw) { value = raw; }