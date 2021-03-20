/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:58:54 by thallard          #+#    #+#             */
/*   Updated: 2021/03/20 22:48:37 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"
#include "classes/Contact.hpp"

int add(Contact *contact)
{
    contact->setFirstName();
    contact->setLastName();
    contact->setNickname();
    contact->setLogin();
    contact->setPostalAddress();
    contact->setEmail();
    contact->setPhone();
    contact->setBirthday();
    contact->setFavoriteMeal();
    contact->setUnderwearColor();
    contact->setDarkestSecret();
    std::cout << "\e[1;32mContact " << contact->getFirstName() << " " << contact->getLastName() << " successfully added.\e[0m" << std::endl;
    return (0);
}

void search(Contact *contact, int nb)
{
    std::string temp;
    int index;

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
    std::cout << "|__________|__________|__________|__________|" << std::endl
              << std::endl
              << "\e[1;32mEnter the index :\e[0m ";
    std::cin >> index;
    if (index > nb)
        std::cout << "Error" << std::endl;
}

int main()
{
    std::string line;
    Contact list[8];
    int nb_contacts = 0;

    std::cout << "\e[1;32mWelcome on your personal PhoneBook, you can use :" << std::endl;
    std::cout << "ADD    : To add a new contact in the annuary." << std::endl;
    std::cout << "SEARCH : To show your contact list and their infos." << std::endl;
    std::cout << "EXIT   : Exit the program.\e[0m" << std::endl;
    std::getline(std::cin, line);
    while (line != "EXIT")
    {
        if (line == "SEARCH")
            search(list, nb_contacts);
        else if (line == "ADD" && nb_contacts < 8)
            add(&list[nb_contacts++]);
        else if (line == "ADD" && nb_contacts > 8)
        {
            std::cout << "Trop de contacts" << std::endl;
            return (0);
        }
        else
            std::cout << "\033[0;31mError : Unvalid command, please use ADD, SEARCH or EXIT.\e[0m" << std::endl;
        std::getline(std::cin, line);
    }
    std::cout << "Bye bye, see you soon!" << std::endl;
    return (0);
}
