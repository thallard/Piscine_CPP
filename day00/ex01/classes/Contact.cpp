/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 18:41:29 by thallard          #+#    #+#             */
/*   Updated: 2021/03/24 08:53:17 by thallard         ###   ########lyon.fr   */
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

void Contact::setFirstName()
{
    std::string line;

    std::cout << "\e[0;32mEnter the first name :\e[0m ";
    while (std::getline(std::cin, line))
    {
        if (contains_digit(line) || line.size() == 0)
        {
            std::cout << "\033[0;31mError : Digit in first name or size of 0.\033[0m" << std::endl;
            std::cout << "\e[0;32mEnter the first name :\e[0m ";
            continue;
        }
        _firstName = line;
        break;
    }
}

void Contact::setLastName()
{
    std::string line;

    std::cout << "\e[0;32mEnter the last name :\e[0m ";
    while (std::getline(std::cin, line))
    {
        if (contains_digit(line) || line.size() == 0)
        {
            std::cout << "\033[0;31mError : Digit in last name or size of 0.\033[0m" << std::endl;
            std::cout << "\e[0;32mEnter the last name :\e[0m ";
            continue;
        }
        _lastName = line;
        break;
    }
}

void Contact::setNickname()
{
    std::string line;

    std::cout << "\e[0;32mEnter the nickname :\e[0m ";
    while (std::getline(std::cin, line))
    {
        if (contains_digit(line) || line.size() == 0)
        {
            std::cout << "\033[0;31mError : Digit in nickanme or size of 0.\033[0m" << std::endl;
            std::cout << "\e[0;32mEnter the nickname :\e[0m ";
            continue;
        }
        _nickname = line;
        break;
    }
}

void Contact::setLogin()
{
    std::string line;

    std::cout << "\e[0;32mEnter the login :\e[0m ";
    while (std::getline(std::cin, line))
    {
        if (line.size() == 0)
        {
            std::cout << "\033[0;31mError : Size of 0.\033[0m" << std::endl;
            std::cout << "\e[0;32mEnter the login :\e[0m ";
            continue;
        }
        _login = line;
        break;
    }
}

void Contact::setPostalAddress()
{
    std::string line;

    std::cout << "\e[0;32mEnter the postal address :\e[0m ";
    while (std::getline(std::cin, line))
    {
        if (line.size() == 0)
        {
            std::cout << "\033[0;31mError : Size of 0.\033[0m" << std::endl;
            std::cout << "\e[0;32mEnter the postal address :\e[0m ";
            continue;
        }
        _postalAddress = line;
        break;
    }
}

void Contact::setEmail()
{
    std::string line;

    std::cout << "\e[0;32mEnter the email :\e[0m ";
    while (std::getline(std::cin, line))
    {
        if (!contains_arobase(line) || line.size() == 0)
        {
            std::cout << "\033[0;31mError : Need a '@' in email or size of 0.\033[0m" << std::endl;
            std::cout << "\e[0;32mEnter the email :\e[0m ";
            continue;
        }
        _email = line;
        break;
    }
}

void Contact::setPhone()
{
    std::string line;

    std::cout << "\e[0;32mEnter the phone number :\e[0m ";
    while (std::getline(std::cin, line))
    {
        if (contains_alpha(line) || line.size() != 10 || line.size() == 0)
        {
            std::cout << "\033[0;31mError : Alphanumeric characters in phone number and size must be 10.\033[0m" << std::endl;
            std::cout << "\e[0;32mEnter the phone number :\e[0m ";
            continue;
        }
        _phone = line;
        break;
    }
}

void Contact::setBirthday()
{
    std::string line;

    std::cout << "\e[0;32mEnter the birthday date :\e[0m ";
    while (std::getline(std::cin, line))
    {
        if (line.size() == 0)
        {
            std::cout << "\033[0;31mError : Size of 0.\033[0m" << std::endl;
            std::cout << "\e[0;32mEnter the birthday date :\e[0m ";
            continue;
        }
        _birthday = line;
        break;
    }
}

void Contact::setFavoriteMeal()
{
    std::string line;

    std::cout << "\e[0;32mEnter the favorite meal :\e[0m ";
    while (std::getline(std::cin, line))
    {
        if (line.size() == 0)
        {
            std::cout << "\033[0;31mError : Size of 0.\033[0m" << std::endl;
            std::cout << "\e[0;32mEnter the favorite meal :\e[0m ";
            continue;
        }
        _favoriteMeal = line;
        break;
    }
}

void Contact::setUnderwearColor()
{
    std::string line;

    std::cout << "\e[0;32mEnter the underwear color :\e[0m ";
    while (std::getline(std::cin, line))
    {
        if (contains_digit(line) || line.size() == 0)
        {
            std::cout << "\033[0;31mError : Digit in underwear color or size of 0.\033[0m" << std::endl;
            std::cout << "\e[0;32mEnter the underwear color :\e[0m ";
            continue;
        }
        _underwearColor = line;
        break;
    }
}

void Contact::setDarkestSecret()
{
    std::string line;

    std::cout << "\e[0;32mEnter the darkest secret :\e[0m ";
    while (std::getline(std::cin, line))
    {
        if (line.size() == 0)
        {
            std::cout << "\033[0;31mError : Size of 0.\033[0m" << std::endl;
            std::cout << "\e[0;32mEnter the darkest secret :\e[0m ";
            continue;
        }
        _darkestSecret = line;
        break;
    }
}

std::string Contact::getLastName()
{
    return _lastName;
}

std::string Contact::getFirstName()
{
    return _firstName;
}

std::string Contact::getNickname()
{
    return _nickname;
}

std::string Contact::getLogin()
{
    return _login;
}

std::string Contact::getBirthday()
{
    return _birthday;
}

std::string Contact::getPhone()
{
    return _phone;
}

std::string Contact::getPostalAddress()
{
    return _postalAddress;
}

std::string Contact::getEmail()
{
    return _email;
}

std::string Contact::getFavoriteMeal()
{
    return _favoriteMeal;
}

std::string Contact::getUnderwearColor()
{
    return _underwearColor;
}

std::string Contact::getDarkestSecret()
{
    return _darkestSecret;
}