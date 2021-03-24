/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:08:35 by thallard          #+#    #+#             */
/*   Updated: 2021/03/24 09:14:04 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <iostream>

int main(int argc, char **argv)
{
    int     i = 0, j;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
			std::cout << (char)toupper(argv[i][j]);
	}
      
    std::cout << std::endl;
    return (0);
}