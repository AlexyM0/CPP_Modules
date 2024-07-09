/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:28:05 by almichel          #+#    #+#             */
/*   Updated: 2024/07/09 03:56:40 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Contact.class.hpp"


void addContact(Contact &contact) {
    std::string input;
    
    std::cout << "> First name : ";
    std::getline(std::cin, input);
    contact.setFirstName(input);
    
    std::cout << "> Last name : ";
    std::getline(std::cin, input);
    contact.setLastName(input);
    
    std::cout << "> Nickname : ";
    std::getline(std::cin, input);
    contact.setNickName(input);
    
    std::cout << "> Phone number : ";
    std::getline(std::cin, input);
    contact.setPhoneNumber(input);
    
    std::cout << "> Darkest secret : ";
    std::getline(std::cin, input);
    contact.setDarkestSecret(input);
}

int main(int ac, char **av)
{
	std::string action;
	Contact contact;
	
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, action);
		if (action == "EXIT")
			break;
		else if(action == "ADD")
			addContact(contact);
	}
}