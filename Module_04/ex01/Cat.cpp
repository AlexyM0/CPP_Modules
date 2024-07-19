/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:04:24 by almichel          #+#    #+#             */
/*   Updated: 2024/07/19 02:06:31 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain(this->_type);
}

Cat::Cat(std::string name)
{
	this->_type = name;
	_brain = new Brain(this->_type);
	std::cout << "String Cat constructor has been called" << std::endl;
}

Cat::Cat(Animal const &src)
{
	std::cout << "copy Cat constructor has been called" << std::endl;
	_brain = 0;
	*this = src;
}

Cat &Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		if (_brain)
			delete _brain;
		_brain = new Brain(*rhs._brain);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Default cat destructor called" << std::endl;
	delete _brain;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

Brain &Cat::getBrain() const
{
	return(*(this->_brain));
}


