/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 18:42:06 by thallard          #+#    #+#             */
/*   Updated: 2021/03/19 22:58:54 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <string>

class Contact
{
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _login;
        std::string _postalAddress;
        std::string _email;
        std::string _phone;
        std::string _birthday;
        std::string _favoriteMeal;
        std::string _underwearColor;
        std::string _darkestSecret;

    public: 
        Contact();
        ~Contact();
        int setFirstName(std::string FirstName);
        int setLastName(std::string lastName);
        int setNickname(std::string nickname);
        int setLogin(std::string login);
        int setPostalAddress(std::string postalAddress);
        int setEmail(std::string email);
        int setPhone(std::string phone);
        int setBirthday(std::string birthday);
        int setFavoriteMeal(std::string favoriteMeal);
        int setUnderwearColor(std::string underwearColor);
        int setDarkestSecret(std::string darkestSecret);
        std::string getFirstName() { return _firstName; };
        std::string getLastName() { return _lastName; };
        std::string getNickname() { return _nickname; };

};


#endif