/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:06:25 by thallard          #+#    #+#             */
/*   Updated: 2021/04/08 13:42:51 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <ctime>

class Base
{
public:
	virtual ~Base() { std::cout << "\e[31mClass destroyed\e[0m" << std::endl; }
};
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void)
{
	int value = std::rand() % 3;

	if (!value)
	{
		std::cout << "\e[32mGenerate : A Class.\e[0m" << std::endl;
		return new A();
	}
	else if (value == 1)
	{
		std::cout << "\e[33mGenerate : B Class.\e[0m" << std::endl;
		return new B();
	}
	else
	{
		std::cout << "\e[34mGenerate : C Class.\e[0m" << std::endl;
		return new C();
	}
}


void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "\e[32mIdentify from pointer : A Class.\e[0m" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "\e[33mIdentify from pointer : B Class.\e[0m" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "\e[34mIdentify from pointer : C Class.\e[0m" << std::endl;
	else
		std::cerr << "\e[31mIdentify from pointer : Cannot identify.\e[0m" << std::endl;
}

void identify_from_reference( Base & p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "\e[32mIdentify from reference : A Class.\e[0m" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "\e[33mIdentify from reference : B Class.\e[0m" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "\e[34mIdentify from reference : C Class.\e[0m" << std::endl;
	else
		std::cerr << "\e[31mIdentify from reference : Cannot identify.\e[0m" << std::endl;
}

int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));
	Base *base = generate();
	Base &base_ref = *base;
	identify_from_pointer(base);
	identify_from_reference(base_ref);
	delete base;
	return (0);
}