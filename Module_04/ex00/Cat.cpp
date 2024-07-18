/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:04:24 by almichel          #+#    #+#             */
/*   Updated: 2024/07/18 02:02:46 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Animal const &src)
{
	*this = src;
}

Cat &Cat::operator=(Animal const &rhs)
{
	Animal::operator=(rhs);
	return *this;
}

Cat::~Cat()
{
	std::cout << "Default cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
/*
std::string Cat::getType()
{
	return this->_type;
}*/