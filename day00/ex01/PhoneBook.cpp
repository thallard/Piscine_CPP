/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:58:54 by thallard          #+#    #+#             */
/*   Updated: 2021/03/19 22:53:51 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"

int add(Contact *contact)
{
    std::string temp;

    std::cout << "\e[1;32mEnter the first name :\e[0m ";
    std::getline(std::cin, temp);
    contact->setFirstName(temp);

    std::cout << "\e[1;32mEnter the last name :\e[0m ";
    std::getline(std::cin, temp);
    contact->setLastName(temp);

    std::cout << "\e[1;32mEnter the nickname :\e[0m ";
    std::getline(std::cin, temp);
    contact->setNickname(temp);

    std::cout << "\e[1;32mEnter the login :\e[0m ";
    std::getline(std::cin, temp);
    contact->setLogin(temp);

    std::cout << "\e[1;32mEnter the postal address :\e[0m ";
    std::getline(std::cin, temp);
    contact->setPostalAddress(temp);

    std::cout << "\e[1;32mEnter the email address :\e[0m ";
    std::getline(std::cin, temp);
    contact->setEmail(temp);

    std::cout << "\e[1;32mEnter the phone number :\e[0m ";
    std::getline(std::cin, temp);
    contact->setPhone(temp);

    std::cout << "\e[1;32mEnter the birthday date :\e[0m ";
    std::getline(std::cin, temp);
    contact->setBirthday(temp);

    std::cout << "\e[1;32mEnter the favorite meal :\e[0m ";
    std::getline(std::cin, temp);
    contact->setFavoriteMeal(temp);

    std::cout << "\e[1;32mEnter the underwear color :\e[0m ";
    std::getline(std::cin, temp);
    contact->setUnderwearColor(temp);

    std::cout << "\e[1;32mEnter the darkest secret :\e[0m ";
    std::getline(std::cin, temp);
    contact->setDarkestSecret(temp);
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
    unsigned int    size = 0;
    int             index;

    std::cout << "|___________________________________________|" << std::endl;
    for (int i = 0; i < nb; i++)
    {
        temp[0] = i;
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

int main(int argc, char **argv)
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

