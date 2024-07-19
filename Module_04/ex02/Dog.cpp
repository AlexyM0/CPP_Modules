/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:04:17 by almichel          #+#    #+#             */
/*   Updated: 2024/07/19 04:16:34 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain(this->_type);
}

Dog::Dog(std::string name)
{
	this->_type = name;
	_brain = new Brain(this->_type);
	std::cout << "String Dog constructor has been called" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << "copy Dog constructor has been called" << std::endl;
	_brain = 0;
	*this = src;
}

Dog &Dog::operator=(Dog const &rhs)
{
	if(this != &rhs)
	{	
		Animal::operator=(rhs);
		if (_brain)
			delete _brain;

		_brain = new Brain(*rhs._brain);
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor called" << std::endl;
	delete this->_brain;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}

Brain &Dog::getBrain() const
{
	return(*(this->_brain));
}
