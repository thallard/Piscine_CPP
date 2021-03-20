/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 18:42:06 by thallard          #+#    #+#             */
/*   Updated: 2021/03/20 22:27:29 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H
#include <string>

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
    void setFirstName();
    void setLastName();
    void setNickname();
    void setLogin();
    void setPostalAddress();
    void setEmail();
    void setPhone();
    void setBirthday();
    void setFavoriteMeal();
    void setUnderwearColor();
    void setDarkestSecret();
    std::string getFirstName();
    std::string getLastName();
    std::string getNickname();
};

#endif