/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:40:54 by thallard          #+#    #+#             */
/*   Updated: 2021/04/09 16:56:42 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span()
{
	capacity = 0;
}

Span::Span(unsigned int n)
{
	array = new std::vector<int>[n];
	capacity = n;
}

Span::Span(Span const & ref)
{
}

void Span::addNumber(int)
{
	if (array->size() >= capacity)
		throw std::exception();
}

Span::~Span()
{
}