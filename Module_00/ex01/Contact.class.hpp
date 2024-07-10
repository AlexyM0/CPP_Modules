/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:28:00 by almichel          #+#    #+#             */
/*   Updated: 2024/07/10 02:30:22 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>

class Contact	
{

private:
	std::string _first_name;
	std::string _last_name;
	std::string _nick_name;
	std::string _phone_number;
	std::string _darkest_secret;

public:

    Contact();
    ~Contact();
 	void setFirstName(const std::string& first_name);
    void setLastName(const std::string& last_name);
    void setNickName(const std::string& nick_name);
    void setPhoneNumber(const std::string& phone_number);
    void setDarkestSecret(const std::string& darkest_secret);
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;

};

#endif