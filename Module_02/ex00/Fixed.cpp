/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 04:03:37 by almichel          #+#    #+#             */
/*   Updated: 2024/07/15 04:48:25 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_stock_bits = 8;

Fixed::Fixed()
{
	std::cout <<  "Default constructor called" << std::endl;
	this->_stock_nbr = 0;
	
}

Fixed::Fixed(const Fixed & other)
{
	std::cout <<  "Copy Destructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed()
{
	std::cout <<  "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& other) 
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other)
		this->_stock_nbr = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_stock_nbr);
}

void Fixed::setRawBits(int const raw)
{
	this->_stock_nbr = raw;
}
