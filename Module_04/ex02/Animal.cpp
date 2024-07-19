/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:04:28 by almichel          #+#    #+#             */
/*   Updated: 2024/07/18 02:24:55 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal constructor called" << std::endl;
	this->_type = "Default Animal";
}

Animal::Animal(Animal const &src)
{
	*this = src;
}

Animal &Animal::operator=(Animal const &rhs)
{
	if (this != &rhs) 
	{
        this->_type = rhs._type;
    }
	return *this;
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}
