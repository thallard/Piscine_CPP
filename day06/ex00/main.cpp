/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:55:51 by thallard          #+#    #+#             */
/*   Updated: 2021/04/03 13:58:06 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(int argc, char **argv)
{
	(void)argv;
	if (argc == 1 || argc >= 3)
	{
		std::cout << "\e[31mError : Invalid numbers of parameters\e[0m" << std::endl;
	}


	return 0;
}