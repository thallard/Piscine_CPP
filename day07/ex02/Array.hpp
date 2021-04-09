/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:34:15 by thallard          #+#    #+#             */
/*   Updated: 2021/04/09 15:26:18 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <string>
#include <iostream>

template <typename T>
class Array;

template <typename T>
class Array
{
private:
	T *array;
	unsigned int count;

public:
	Array();
	Array(unsigned int n);
	Array(Array<T> &ref);
	~Array();

	Array<T> &operator=(Array<T> &const ref);
	T &operator[](std::size_t index);
	std::size_t size() const;
};

template <typename T>
Array<T>::Array()
{
	count = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	count = n;
	array = new T[n];
}

template <typename T>
Array<T>::Array(Array<T> &ref)
{
	try
	{
		array = new T[ref.count];
		count = ref.count;
		unsigned int i;
		for (i = 0; i < ref.count; i++)
			array[i] = ref[i];
		count = i;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> &const ref)
{
	try
	{
		array = new T[ref.count];
		count = ref.count;
		unsigned int i;
		for (i = 0; i < ref.count; i++)
			array[i] = ref[i];
		count = i;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
}

template <typename T>
T &Array<T>::operator[](std::size_t index)
{
	if (index >= count)
		throw std::exception();
	return array[index];
}

template <typename T>
std::size_t Array<T>::size() const
{
	return count;
}

#endif