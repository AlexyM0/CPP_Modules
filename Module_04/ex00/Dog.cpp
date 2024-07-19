/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:04:17 by almichel          #+#    #+#             */
/*   Updated: 2024/07/19 04:23:20 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->_type = "Dog";
}


Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << "copy Dog constructor has been called" << std::endl;
	*this = src;
}

Dog &Dog::operator=(Dog const &rhs)
{
	Animal::operator=(rhs);
	return *this;
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}
/*
std::string Dog::getType()
{
	return this->_type;
}*/