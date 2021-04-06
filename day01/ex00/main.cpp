/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 00:00:49 by thallard          #+#    #+#             */
/*   Updated: 2021/04/06 10:05:12 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap()
{
    Pony *pony = new Pony("Cracotte", "Vert");
    pony->run(pony);
    delete pony;
}

void ponyOnTheStack() {
    Pony pony("Pantoufle", "Bleu");
  
    pony.run(&pony);
}

int main()
{
    std::cout << "Pony on the Stack !" << std::endl;
    ponyOnTheStack();
	std::cout << std::endl;
    std::cout << "Pony on the Heap !" << std::endl;
    ponyOnTheHeap();
    return (0);
}