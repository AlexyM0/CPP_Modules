/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:28:05 by almichel          #+#    #+#             */
/*   Updated: 2024/07/10 04:28:24 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

bool is_digits(const std::string &str) 
{
    int i;
    for (i = 0; str[i]; i++) 
    {
        if (!isdigit(str[i]))
            return false;
    }
    return true;
}

bool is_alpha(const std::string &str) 
{
    int i;
    for (i = 0; str[i]; i++) 
    {
        if (!isalpha(str[i]))
            return false;
    }
    return true;
}

bool is_alpha_and_digit(const std::string &str) 
{
    int i;
    for (i = 0; str[i]; i++) 
    {
        if (isdigit(str[i]))
            ;
        else
            return true;
    }
    return false;
}

void addContact(Phonebook &phonebook) 
{
    Contact contact;
    std::string input;

    while (1)
    {
        std::cout << "> First name : ";
        std::getline(std::cin, input);
        if (input.empty())
            std::cout << "Enter a valid first name\n";
        else if(!is_alpha(input))
            std::cout << "Enter a valid first name\n";
        else
            break;
    }
    contact.setFirstName(input);
    
    while (1)
    {
        std::cout << "> Last name : ";
        std::getline(std::cin, input);
        if (input.empty())
            std::cout << "Enter a valid last name\n";
        else if(!is_alpha(input))
            std::cout << "Enter a valid last name\n";
        else
            break;
    }
    contact.setLastName(input);
    
    while (1)
    {
        std::cout << "> Nick name : ";
        std::getline(std::cin, input);
        if (input.empty())
            std::cout << "Enter a valid nick name\n";
        else if(!is_alpha(input))
            std::cout << "Enter a valid nick name\n";
        else
            break;
    }
    contact.setNickName(input);
    
    while (1)
    {
        std::cout << "> Phone number : ";
        std::getline(std::cin, input);
        if (input.empty())
            std::cout << "Enter a valid phone number\n";
        else if (!is_digits(input))
            std::cout << "Enter a valid phone number\n";
        else
            break;
    }
    contact.setPhoneNumber(input);

    while (1)
    {
        std::cout << "> Darkest secret : ";
        std::getline(std::cin, input);
        if (input.empty())
            std::cout << "Enter a valid secret\n";
        else if(!is_alpha_and_digit(input))
            std::cout << "Enter a valid secret\n";
        else
            break;
    }
    contact.setDarkestSecret(input);
    
    phonebook.addContactToTab(contact);
    std::cout << "Contact added." << '\n'; 
}

int main()
{
	std::string action;
	Phonebook phonebook;
    
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, action);
		if (action == "EXIT")
			break;
		else if(action == "ADD")
			addContact(phonebook);
        else if(action == "SEARCH")
            phonebook.printContact();
	}
}
