/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:53:13 by thallard          #+#    #+#             */
/*   Updated: 2021/03/23 18:17:29 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>

class Fixed
{
private:
    int value;
    static const int bits = 8;

public:
    Fixed();
    Fixed(int value);
    Fixed(const Fixed &fixed);
    ~Fixed();

    Fixed &operator=(Fixed const &ref);

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif