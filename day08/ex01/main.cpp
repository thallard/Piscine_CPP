/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:29:41 by thallard          #+#    #+#             */
/*   Updated: 2021/04/21 14:49:11 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span();

	sp.addNumber(8);
	sp.addNumber(4);
	sp.addNumber(17);
	sp.addNumber(18);
	sp.addNumber(11);
	std::cout << "\e[32mMax value in Span : " << sp.getMax() << " and Min value : " << sp.getMin() << "\e[0m" << std::endl;
	std::cout << "\e[34mShortest span : " << sp.shortestSpan() << "\e[0m" << std::endl;
	std::cout << "\e[35mLongest span : " << sp.longestSpan() << "\e[0m" << std::endl;
}