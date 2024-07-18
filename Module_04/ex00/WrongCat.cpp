/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 02:42:07 by almichel          #+#    #+#             */
/*   Updated: 2024/07/18 02:42:31 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() 
{
	this->_type = "WrongCat";
	std::cout << "Default WrongCat constructor has been called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
    *this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor has been called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const & rhs)
{
	WrongAnimal::operator=(rhs);
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Miaouh miaouh" << std::endl;
}
