/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 09:46:12 by thallard          #+#    #+#             */
/*   Updated: 2021/04/21 14:48:30 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <vector>
#include <string>
#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>() {}
	MutantStack(MutantStack const &obj) : std::stack<T>(obj) {}
	MutantStack &operator=(MutantStack const &ref)
	{
		if (this == ref)
			return *this;
		return (*new (this) MutantStack(ref));
	}
	virtual ~MutantStack() {}
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin(void) { return std::stack<T>::c.begin(); }
	iterator end(void) { return std::stack<T>::c.end(); }
};
#endif