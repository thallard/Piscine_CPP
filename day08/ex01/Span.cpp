/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:40:54 by thallard          #+#    #+#             */
/*   Updated: 2021/04/13 11:15:41 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	capacity = 0;
	count = 0;
}

Span::Span(unsigned int n)
{
	array = new std::vector<int>[n];
	capacity = n;
	count = 0;
}

Span::Span(Span const &ref)
{
	*this = ref;
}
Span &Span::operator=(Span const &ref)
{
	array = ref.array;
	capacity = ref.capacity;
	count = ref.count;
	return *this;
}
int &Span::operator[](std::size_t index)
{
	if (index >= capacity)
		throw std::exception();
	return array->at(index);
}

Span::~Span()
{
	delete [] array;
}

void Span::addNumber(int nb)
{
	if (array->size() >= capacity)
		throw std::exception();
	array->push_back(nb);
	count++;
}

void Span::addNumberRange(int start, int end)
{
	unsigned int range = static_cast<unsigned int>(std::abs(end)) - static_cast<unsigned int>(std::abs(start));
	unsigned int i;
	for (i = 0; i <= range; i++)
		if (i + count < capacity)
			array->push_back(start++);
		else
		{
			count += i;
			throw std::exception();
		}
	count += i;
}

int Span::longestSpan()
{
	return (getMax() - getMin());
}

int Span::shortestSpan()
{

	return (0);
}

int Span::getMax()
{
	int max = 0;
	for (unsigned int i = 0; i < count; i++)
		if (array->at(i) > max)
			max = array->at(i);
	return (max);
}

int Span::getMin()
{
	int min = getMax();
	for (unsigned int i = 0; i < capacity; i++)
		if (array->at(i) < min)
			min = array->at(i);
	return (min);
}