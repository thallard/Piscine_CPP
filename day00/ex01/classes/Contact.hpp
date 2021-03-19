/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 18:42:06 by thallard          #+#    #+#             */
/*   Updated: 2021/03/19 21:22:03 by thallard         ###   ########lyon.fr   */
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
        void setFirstName(std::string FirstName);
        void setLastName(std::string lastName);
        void setNickname(std::string nickname);
        void setLogin(std::string login);
        void setPostalAddress(std::string postalAddress);
        void setEmail(std::string email);
        void setPhone(std::string phone);
        void setBirthday(std::string birthday);
        void setFavoriteMeal(std::string favoriteMeal);
        void setUnderwearColor(std::string underwearColor);
        void setDarkestSecret(std::string darkestSecret);
        std::string getFirstName() { return _firstName; };
        std::string getLastName() { return _lastName; };
        std::string getNickname() { return _nickname; };

};


#endif