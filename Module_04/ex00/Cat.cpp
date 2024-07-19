/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:04:24 by almichel          #+#    #+#             */
/*   Updated: 2024/07/19 04:22:43 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << "copy Cat constructor has been called" << std::endl;
	*this = src;
}

Cat &Cat::operator=(Cat const &rhs)
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
