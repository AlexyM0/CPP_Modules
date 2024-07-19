/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 03:24:54 by almichel          #+#    #+#             */
/*   Updated: 2024/07/19 04:21:07 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "Default WrongAnimal constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "copy Wrong Animal constructor has been called" << std::endl;
    *this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal Destructor has been called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const & rhs)
{
	if ( this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "I'm just an WrongAnimal don't know wich song i should make" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}

void WrongAnimal::setType(std::string type)
{
	this->_type = type;
	return ;
}
