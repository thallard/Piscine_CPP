/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:36:01 by thallard          #+#    #+#             */
/*   Updated: 2021/04/09 00:44:08 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


template <typename T>
void iter(T *array, unsigned int size, void (*f)(T &elem))
{
    // template <typename T> void iter(T *array, unsigned int length, void (*f)(T &elem))
{
  for (unsigned int i = 0; i < length; i++) {
    f(array[i]);
  }
}
}
int main()
{

    return (0);
}