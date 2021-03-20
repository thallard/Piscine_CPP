/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 23:51:10 by thallard          #+#    #+#             */
/*   Updated: 2021/03/21 00:01:03 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

class Pony
{
private:
    int     _poids;
    int     _couleur;
    int     _taille;
public:
    Pony();
    ~Pony();
    ponyOnTheStack(Pony *pony);
    ponyOnTheHeap(Pony *pony);
};



#endif