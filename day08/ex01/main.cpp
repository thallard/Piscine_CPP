/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:29:41 by thallard          #+#    #+#             */
/*   Updated: 2021/04/13 11:14:24 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(11);

	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumberRange(128, 133);
	}
	catch(const std::exception& e)
	{
		std::cerr << "\e[31m" << e.what() << " : Can\'t add more than 5 numbers in Span.\n\e[0m";
	}
	std::cout << "\e[32mMax value in Span : " << sp.getMax() << " and Min value : " << sp.getMin() << "\e[0m" << std::endl;
	std::cout  << "\e[34mShortest span : " << sp.shortestSpan() << "\e[0m" << std::endl;
	std::cout << "\e[35mLongest span : " << sp.longestSpan() << "\e[0m" << std::endl;
}