/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:28:15 by almichel          #+#    #+#             */
/*   Updated: 2024/07/10 05:11:10 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"
#include "utils.hpp"
#include <cstdlib>

Phonebook::Phonebook() : _index(1){}
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
		for (i = 7; i > 0; i--) {
            _contacts[i] = _contacts[i - 1];
        }
		_contacts[0] = contact;
    }
}

Contact Phonebook::getContact(int index)
{
        return _contacts[index];
}

void Phonebook::printContact(void)
{
    Contact contact;
    std::string input;
    int nb;
    while (1)
    {
        std::cout << "> Enter the number of the contact you want to display : ";
        std::getline(std::cin, input);
        if (input.empty() || !is_digits(input))
            std::cout << "Enter a positive number\n";
        else
            break;
    }
    nb = std::atoi(input.c_str());
    if (nb <= 0 || nb > this->_index)
    {
        std::cout << "The contact was not found\n";
        return;
    }
    contact = getContact(nb);
    std::cout << "Index: " << nb << std::endl;
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "Nick Name: " << contact.getNickName() << std::endl;
    
}

