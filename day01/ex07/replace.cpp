/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:27:57 by thallard          #+#    #+#             */
/*   Updated: 2021/03/25 13:32:13 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int			write_replace(std::string final_str, std::string filename)
{
	std::ofstream		output;

	output.open(filename += ".replace");
	if (output.is_open())
	{
		output << final_str;
		output.close();
		return (0);
	}
	std::cout << "\e[31mError : Can't create the .replace file.\e[0m" << std::endl;
	return (1);
}

int		search_and_replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream		file;
	std::stringstream	ret;
	std::string			str;
	size_t				c = 0;

	
	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cout << "\e[31mError : One of argument is empty.\e[0m" << std::endl;
		return (0);
	}
	file.open(filename);
	if (file.is_open())
	{
		while (std::getline(file, str))
		{
			if (c == str.npos)
				ret << std::endl;
			while ((c = str.find(s1)) != str.npos)
				str.replace(c, s1.length(), s2);
			ret << str;
		}
		file.close();
		return (write_replace(ret.str(), filename));
	}
	std::cout << "\e[31mError : Impossible to open your file : " << filename << "\e[0m" << std::endl;
	return (1);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "\e[31mError : Invalid numbers of parameters.\e[0m" << std::endl;
		return (0);
	}
	if (!search_and_replace(argv[1], argv[2], argv[3]))
		return (0);

	return 0;
}