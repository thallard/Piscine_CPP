/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:31:09 by thallard          #+#    #+#             */
/*   Updated: 2021/04/09 16:49:03 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <string>
#include <iostream>
#include <vector>

class Span
{
private:
	std::vector<int> *array;
	unsigned int capacity;
public:
	Span();
	Span(unsigned int n);
	Span(Span const & ref);
	Span &operator=(Span & const ref);
	~Span();

	void addNumber(int);
	int shortestSpan();
	int longestSpan();
};




#endif