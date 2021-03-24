/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:58:54 by thallard          #+#    #+#             */
/*   Updated: 2021/03/24 09:20:40 by thallard         ###   ########lyon.fr   */
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

void show_infos_contact(Contact *contact, int index)
{
	std::cout << "\e[0;33mIndex : " << index << std::endl;
	std::cout << "First name : " << contact[index].getFirstName() << std::endl;
	std::cout << "Last name : " << contact[index].getLastName() << std::endl;
	std::cout << "Nickname : " << contact[index].getNickname() << std::endl;
	std::cout << "Login : " << contact[index].getLogin() << std::endl;
	std::cout << "Postal address : " << contact[index].getPostalAddress() << std::endl;
	std::cout << "Email : " << contact[index].getEmail() << std::endl;
	std::cout << "Phone number : " << contact[index].getPhone() << std::endl;
	std::cout << "Birthday date : " << contact[index].getBirthday() << std::endl;
	std::cout << "Favorite meal : " << contact[index].getFavoriteMeal() << std::endl;
	std::cout << "Underwear color : " << contact[index].getUnderwearColor() << std::endl;
	std::cout << "Darkest secret : " << contact[index].getDarkestSecret() << "\e[0m" << std::endl;
}

void search(Contact *contact, int nb)
{
	std::string temp;
	std::string index_str;
	int index;

	std::cout << "|___________________________________________|" << std::endl;
	for (int i = 0; i < nb + 1; i++)
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
	if (nb >= 1)
	{
		std::cout << "\e[1;32mEnter the index (type CANCEL if you want to leave this research) :\e[0m ";
		while (std::getline(std::cin, index_str) && index_str != "CANCEL")
		{
			index = atoi(index_str.c_str());
			if (index > nb || !contains_digit(index_str) || index < 0 || index > 9)
				std::cout << "\e[0;31mError : Invalid index or alphanumeric characters.\e[0m" << std::endl;
			else
			{
				show_infos_contact(contact, index);
				break;
			}
			std::cout << "\e[1;32mEnter the index (type CANCEL if you want to leave this research) :\e[0m ";
		}
	}
}

int main()
{
	std::string line;
	Contact list[8];
	int nb_contacts = -1;

	std::cout << "\e[1;32mWelcome on your personal PhoneBook, you can use :" << std::endl;
	std::cout << "ADD    : To add a new contact in the annuary." << std::endl;
	std::cout << "SEARCH : To show your contact list and their infos." << std::endl;
	std::cout << "EXIT   : Exit the program.\e[0m" << std::endl;
	std::getline(std::cin, line);
	while (line != "EXIT")
	{
		if (line == "SEARCH")
			search(list, nb_contacts);
		else if (line == "ADD" && nb_contacts < 7)
			add(&list[++nb_contacts]);
		else if (line == "ADD" && nb_contacts >= 7)
			std::cout << "\e[0;31mTrop de contacts.\e[0m" << std::endl;
		else
			std::cout << "\e[0;31mError : Unvalid command, please use ADD, SEARCH or EXIT.\e[0m" << std::endl;
		std::getline(std::cin, line);
	}
	std::cout << "Bye bye, see you soon!" << std::endl;
	return (0);
}
