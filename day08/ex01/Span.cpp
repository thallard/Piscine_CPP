/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:40:54 by thallard          #+#    #+#             */
/*   Updated: 2021/04/21 14:43:42 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	array = std::vector<int>();
}

Span::Span(unsigned int n)
{
	array = std::vector<int>(n);
}

Span::Span(Span const &ref)
{
	*this = ref;
}
Span &Span::operator=(Span const &ref)
{
	if (this == &ref)
		return *this;
	array = ref.array;
	return *this;
}
int &Span::operator[](std::size_t index)
{
	if (index >= array.capacity())
		throw std::exception();
	return array.at(index);
}

Span::~Span()
{
}

void Span::addNumber(int nb)
{
	array.push_back(nb);
}

void Span::addNumberRange(int start, int end)
{
	unsigned int range = static_cast<unsigned int>(std::abs(end)) - static_cast<unsigned int>(std::abs(start));
	for (size_t i = 0; i <= range; i++)
		array.push_back(start++);
}

int Span::longestSpan()
{
	return (getMax() - getMin());
}

int Span::shortestSpan()
{
	int gap = 2147483647;

	for (size_t i = 0; i < array.size(); i++)
		for (size_t j = 0; j < array.size(); j++)
			if (std::abs(array.at(i)) - std::abs(array.at(j)) < gap && std::abs(array.at(i)) != std::abs(array.at(j)) && std::abs(array.at(i)) - std::abs(array.at(j)) > 0)
				gap = std::abs(array.at(i)) - std::abs(array.at(j));
	return (gap);
}

int Span::getMax()
{
	int max = 0;
	for (size_t i = 0; i < array.size(); i++)
		if (array.at(i) > max)
			max = array.at(i);
	return (max);
}

int Span::getMin()
{
	int min = getMax();
	for (unsigned int i = 0; i < array.size(); i++)
		if (array.at(i) < min)
			min = array.at(i);
	return (min);
}