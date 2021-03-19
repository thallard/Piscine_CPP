/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:58:54 by thallard          #+#    #+#             */
/*   Updated: 2021/03/20 00:10:35 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"



int add(Contact *contact)
{
    std::string temp;

    while (1)
    {
        std::cout << "\e[1;32mEnter the first name :\e[0m ";
        std::getline(std::cin, temp);
        if (contact->setFirstName(temp))
            break ;
    }
    while (1)
    {
        std::cout << "\e[1;32mEnter the last name :\e[0m ";
        std::getline(std::cin, temp);
        if (contact->setLastName(temp))
            break ;
    }
    while (1)
    {
        std::cout << "\e[1;32mEnter the nickname :\e[0m ";
        std::getline(std::cin, temp);
        if (contact->setNickname(temp))
            break ;
    }
    while (1)
    {
        std::cout << "\e[1;32mEnter the login :\e[0m ";
        std::getline(std::cin, temp);
        if (contact->setLogin(temp))
            break ;
    }
    while (1)
    {
        std::cout << "\e[1;32mEnter the postal address :\e[0m ";
        std::getline(std::cin, temp);
        if (contact->setPostalAddress(temp))
            break ;
    }    
    while (1)
    {
        std::cout << "\e[1;32mEnter the email address :\e[0m ";
        std::getline(std::cin, temp);
        if (contact->setEmail(temp))
            break ;
    }
    while (1)
    {
        std::cout << "\e[1;32mEnter the phone number :\e[0m ";
        std::getline(std::cin, temp);
        if (contact->setPhone(temp))
            break ;
    }
    while (1)
    {
        std::cout << "\e[1;32mEnter the birthday date :\e[0m ";
        std::getline(std::cin, temp);
        contact->setBirthday(temp);
        if (contact->setPhone(temp))
            break ;
    }
    while (1)
    {
        std::cout << "\e[1;32mEnter the favorite meal :\e[0m ";
        std::getline(std::cin, temp);
        if (contact->setFavoriteMeal(temp))
            break ;
    }
    while (1)
    {
        std::cout << "\e[1;32mEnter the underwear color :\e[0m ";
        std::getline(std::cin, temp);
        if (contact->setUnderwearColor(temp))
            break ;
    }
    while (1)
    {
        std::cout << "\e[1;32mEnter the darkest secret :\e[0m ";
        std::getline(std::cin, temp);
        if (contact->setDarkestSecret(temp))
            break ;
    }
    return (0);
}

void    cut_and_print(std::string str)
{
    if (str.size() > 10)
    {
            str[9] = '.';
            str.resize(10);
    }
    else
        str.resize(10, ' ');
    std::cout << str << "|";
}

void    search(Contact *contact, int nb)
{
    std::string     temp;
    int             index;

    std::cout << "|___________________________________________|" << std::endl;
    for (int i = 0; i < nb; i++)
    {
        temp[0] = (char)i;
        temp.resize(10, ' ');
        std::cout << "|" << i << "         |";
        temp = contact[i].getFirstName();
        cut_and_print(temp);
        temp = contact[i].getLastName();
        cut_and_print(temp);
        temp = contact[i].getNickname();
        cut_and_print(temp);
        std::cout << std::endl;
    }
    std::cout << "|__________|__________|__________|__________|" << std::endl << std::endl;
    std::cout << "\e[1;32mEnter the index :\e[0m ";
    std::cin >> index;
    if (index > nb)
        std::cout << "Error" << std::endl;
}

int main()
{
    std::string line;
    Contact     list[8];
    int         nb_contacts = 0;

    std::getline(std::cin, line);
    while (line != "EXIT")
    {
        if (line == "SEARCH")
            search(list, nb_contacts);
        if (line == "ADD" && nb_contacts < 8)
            add(&list[nb_contacts++]);
        else if (line == "ADD" && nb_contacts > 8)
        {
            std::cout << "Trop de contacts" << std::endl;
            return (0);
        }
        std::getline(std::cin, line);
    }
    return (0);
}

