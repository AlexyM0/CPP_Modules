/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 04:03:37 by almichel          #+#    #+#             */
/*   Updated: 2024/07/15 17:22:22 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_stock_bits = 8;

Fixed::Fixed()
{
	std::cout <<  "Default constructor called" << std::endl;
	this->_stock_nbr = 0;
	
}

Fixed::Fixed(const int nb)
{
	std::cout <<  "Int constructor called" << std::endl;
	this->_stock_nbr = nb * 256;
	
}

Fixed::Fixed(const float nb)
{
	std::cout <<  "Float constructor called" << std::endl;
	this->_stock_nbr = roundf(nb * 256);
	
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

float Fixed::toFloat( void ) const
{
	return (float)this->getRawBits() / 256;
}

int Fixed::toInt(void) const
{
	return this->getRawBits() / 256;
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
	return (this->_stock_nbr);
}

void Fixed::setRawBits(int const raw)
{
	this->_stock_nbr = raw;
}
