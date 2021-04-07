/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:55:51 by thallard          #+#    #+#             */
/*   Updated: 2021/04/07 14:39:28 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <iomanip>

int main(int argc, char **argv)
{
	if (argc == 1 || argc >= 3)
	{
		std::cout << "\e[31mError : Invalid numbers of parameters\e[0m" << std::endl;
		return (0);
	}
	double nb;
	if (sizeof(argv[1]) >= 0 && isprint(argv[1][0]) && !isdigit(argv[1][0]))
	{
		nb = (int)argv[1][0];
	}
	else
		nb = atof(argv[1]);
	double save;

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
	if ((save = nb - static_cast<int>(nb)) == 0)
		std::cout << "\e[34mfloat  : " << std::fixed << std::setprecision(1) << static_cast<float>(nb) << "f\e[0m" << std::endl;
	else
		std::cout << "\e[34mfloat  : " << std::setprecision(static_cast<int>(std::to_string(save).length())) << static_cast<float>(nb) << "f\e[0m" << std::endl;
	if ((save = nb - static_cast<int>(nb)) == 0)
		std::cout << "\e[35mdouble : " << std::fixed << std::setprecision(1) << nb << "\e[0m" << std::endl;
	else
		std::cout << "\e[35mdouble : " << std::setprecision(static_cast<int>(std::to_string(save).length())) << nb << "\e[0m" << std::endl;
	return 0;
}