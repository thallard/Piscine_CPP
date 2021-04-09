/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 14:42:43 by thallard          #+#    #+#             */
/*   Updated: 2021/04/09 15:17:35 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <string>
#include <iostream>
#include <vector>

template<typename T>
unsigned long	easyfind(T vector, int value) throw(std::exception)
{
	typename T::iterator tmp = std::find(vector.begin(), vector.end(), value);
	if (tmp == vector.end())
		throw std::exception();
	return (static_cast<unsigned long>(*tmp));
}

#endif

