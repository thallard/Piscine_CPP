/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 18:41:29 by thallard          #+#    #+#             */
/*   Updated: 2021/03/19 20:33:43 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

void    Contact::setFirstName(std::string Name)
{
    _firstName = Name;
}

void    Contact::setLastName(std::string Name)
{
    _lastName = Name;
}

void    Contact::setNickname(std::string nickname)
{
    _nickname = nickname;
}

void    Contact::setLogin(std::string login)
{
    _login = login;
}

void    Contact::setPostalAddress(std::string postal)
{
    _postalAddress = postal;
}

void    Contact::setEmail(std::string email)
{
    _email = email;
}

void    Contact::setPhone(std::string phone)
{
    _phone = phone;
}

void    Contact::setBirthday(std::string birthday)
{
    _birthday = birthday;
}

void    Contact::setFavoriteMeal(std::string favoriteMeal)
{
    _favoriteMeal = favoriteMeal;
}

void    Contact::setUnderwearColor(std::string underwearColor)
{
    _underwearColor = underwearColor;
}

void    Contact::setDarkestSecret(std::string darkestSecret)
{
    _darkestSecret = darkestSecret;
}