/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:31:09 by thallard          #+#    #+#             */
/*   Updated: 2021/04/21 14:34:17 by thallard         ###   ########lyon.fr   */
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
	std::vector<int> array;
public:
	Span();
	Span(unsigned int n);
	Span(Span const & ref);
	Span &operator=(Span const & ref);
	int &operator[](std::size_t index);
	~Span();

	void addNumberRange(int, int);
	void addNumber(int);
	int shortestSpan();
	int longestSpan();
	int getMin();
	int getMax();
};




#endif