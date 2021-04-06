/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:55:51 by thallard          #+#    #+#             */
/*   Updated: 2021/04/06 17:36:37 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <limits.h>
#include <math.h>


int main(int argc, char **argv)
{
	if (argc == 1 || argc >= 3)
	{
		std::cout << "\e[31mError : Invalid numbers of parameters\e[0m" << std::endl;
		return (0);
	}
	double nb = atof(argv[1]);

	if (isprint(static_cast<int>(nb)))
		std::cout << "\e[32mchar   : " << static_cast<char>(nb) << "\e[0m" << std::endl;
	else
			std::cout << "\e[33mchar   : Non displayable\e[0m" << std::endl;
	if (isinf(nb) == false && nb == nb)
		std::cout << "\e[36mint    : " << static_cast<int>(nb) << "\e[0m" << std::endl;
	else if (nb != nb)
		std::cout << "\e[36mint    : impossible\e[0m" << std::endl;
	else
		std::cout << "\e[36mint    : impossible\e[0m" << std::endl;
	std::cout << "\e[34mfloat  : " << static_cast<float>(nb) << "f\e[0m" << std::endl;
	std::cout << "\e[35mdouble : " << nb << "\e[0m" << std::endl;

	return 0;
}