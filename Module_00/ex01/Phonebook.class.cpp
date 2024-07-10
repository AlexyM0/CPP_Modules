/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:28:15 by almichel          #+#    #+#             */
/*   Updated: 2024/07/10 19:21:36 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"
#include "utils.hpp"
#include <cstdlib>
#include <iomanip>

Phonebook::Phonebook() : _index(0){}
Phonebook::~Phonebook() {}

void Phonebook::addContactToTab(const Contact& contact) 
{
	int	i;

    if (_index < 8) {
        _contacts[_index] = contact;
        _index++;
    } 
	else 
	{
		for (i = 0; i < 7; i++) {
            _contacts[i] = _contacts[i + 1];
        }
        _contacts[7] = contact;
    }
}

Contact Phonebook::getContact(int index)
{
        return _contacts[index];
}

std::string Phonebook::truncate(const std::string& str, std::size_t width) 
{
    if (str.size() > 10) {
        return str.substr(0, width - 1) + ".";
    } else {
        return str;
    }
}

void Phonebook::printContact(void)
{
    Contact contact;
    std::string input;
    int nb;;
    std::string separator = "|----------|----------|----------|----------|";
    int i;
    
    std::cout << separator << std::endl;
    std::cout << "|  INDEX   |   FIRST  |   LAST   |   NICK   |" << std::endl;
    std::cout << separator << std::endl;
    if (this->_index != 0)
    {
        for (i = 0; i < this->_index; i++)
        {
            contact = this->_contacts[i];
            std::cout << "|";
            std::cout << std::setw(10) << std::right << i << "|";
            std::cout << std::setw(10) << std::right <<  truncate(contact.getFirstName(), 10) << "|";
            std::cout << std::setw(10) << std::right << truncate(contact.getLastName(), 10)  << "|";
            std::cout << std::setw(10) << std::right << truncate(contact.getDarkestSecret(), 10) << "|";
            std::cout << std::endl;
            std::cout << separator << std::endl;
        }
    }
    std::cout << '\n';
    while (1)
    {
        std::cout << "> Enter the number of the contact you want to display : ";
        std::getline(std::cin, input);
        if (input.empty() || !is_digits(input))
            std::cout << "Enter a valid number\n";
        else
            break;
    }
    nb = std::atoi(input.c_str());
    if (nb < 0 || nb >= this->_index)
    {
        std::cout << "The contact was not found\n";
        return;
    }
    contact = getContact(nb);
    std::cout << "Index: " << nb << std::endl;
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "Nick Name: " << contact.getNickName() << std::endl;
    std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
    
}

