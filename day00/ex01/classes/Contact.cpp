/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 18:41:29 by thallard          #+#    #+#             */
/*   Updated: 2021/03/19 23:39:39 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "../includes/PhoneBook.hpp"

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

int    Contact::setFirstName(std::string Name)
{
    if (contains_digit(Name) || Name.size() == 0)
    {
        std::cout << "\033[0;31mError : Digit in first name or size of 0.\033[0m" << std::endl;
        return (0);
    }
    _firstName = Name;
    return (1);
}

int    Contact::setLastName(std::string Name)
{ 
    if (contains_digit(Name) || Name.size() == 0)
    {
        std::cout << "\033[0;31mError : Digit in last name or size of 0.\033[0m" << std::endl;
         return (0);
    }
    _lastName = Name;
     return (1);
}

int    Contact::setNickname(std::string nickname)
{
    if (contains_digit(nickname) || nickname.size() == 0)
    {
        std::cout << "\033[0;31mError : Digit in nickanme or size of 0.\033[0m" << std::endl;
         return (0);
    }
    _nickname = nickname;
    return (1);
}

int    Contact::setLogin(std::string login)
{
    if (login.size() == 0)
    {
        std::cout << "\033[0;31mError : Size of 0.\033[0m" << std::endl;
        return (0);
    }
    _login = login;
    return (1);
}

int    Contact::setPostalAddress(std::string postal)
{
    if (postal.size() == 0)
    {
        std::cout << "\033[0;31mError : Size of 0.\033[0m" << std::endl;
        return (0);
    }
    _postalAddress = postal;
    return (1);
}

int    Contact::setEmail(std::string email)
{
    if (!contains_arobase(email) || email.size() == 0)
    {
        std::cout << "\033[0;31mError : Need a '@' in email or size of 0.\033[0m" << std::endl;
        return (0);
    }
    _email = email;
    return (1);
}

int    Contact::setPhone(std::string phone)
{
    if (contains_alpha(phone) || (phone.size() != 10 && phone.size() == 0))
    {
        std::cout << "\033[0;31mError : Digit in phone number and size must be 10 or size of 0.\033[0m" << std::endl;
        return (0);
    }
    _phone = phone;
    return (1);
}

int    Contact::setBirthday(std::string birthday)
{
    if (birthday.size() == 0)
    {
        std::cout << "\033[0;31mError : Size of 0.\033[0m" << std::endl;
        return (0);
    }
    _birthday = birthday;
    return (1);
}

int    Contact::setFavoriteMeal(std::string favoriteMeal)
{
    if (favoriteMeal.size() == 0)
    {
        std::cout << "\033[0;31mError : Size of 0.\033[0m" << std::endl;
        return (0);
    }
    _favoriteMeal = favoriteMeal;
    return (1);
}

int    Contact::setUnderwearColor(std::string underwearColor)
{
    if (contains_digit(underwearColor) || underwearColor.size() == 0)
    {
        std::cout << "\033[0;31mError : Digit in underwear color or size of 0.\033[0m" << std::endl;
        return (0);
    }
    _underwearColor = underwearColor;
    return (1);
}

int    Contact::setDarkestSecret(std::string darkestSecret)
{
    if (darkestSecret.size() == 0)
    {
        std::cout << "\033[0;31mError : Size of 0.\033[0m" << std::endl;
        return (0);
    }
    _darkestSecret = darkestSecret;
    return (1);
}