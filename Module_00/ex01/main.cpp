/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:28:05 by almichel          #+#    #+#             */
/*   Updated: 2024/07/09 03:48:52 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Contact.class.hpp"

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
		{
			std::cout << "> First name : ";
			getline(std::cin, action);
			contact.setFirstName(action);
			std::cout << "> Last name : ";
			getline(std::cin, action);
			contact.setLastName(action);
			std::cout << "> Nickname : ";
			getline(std::cin, action);
			contact.setNickName(action);
			std::cout << "> Phone number : ";
			getline(std::cin, action);
			contact.setPhoneNumber(action);
			std::cout << "> Darkest secret :  ";
			getline(std::cin, action);
			contact.setDarkestSecret(action);
		}
	}
}