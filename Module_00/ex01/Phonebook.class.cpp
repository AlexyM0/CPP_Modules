/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:28:15 by almichel          #+#    #+#             */
/*   Updated: 2024/07/10 03:49:04 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

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
		for (i = 7; i > 0; i--) {
            _contacts[i] = _contacts[i - 1];
        }
		_contacts[0] = contact;
    }
}

