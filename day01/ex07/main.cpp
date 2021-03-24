/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:27:57 by thallard          #+#    #+#             */
/*   Updated: 2021/03/24 13:38:08 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main()
{
	std::ifstream ifs("text");
	std::string text;

	ifs >> text >> text >> text;
	std::cout << text << std::endl;
	ifs.close();

	std::ofstream ofs("text");
	ofs << "i like something";
	ofs.close();
	return 0;
}