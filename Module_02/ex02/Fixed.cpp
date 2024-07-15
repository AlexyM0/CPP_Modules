/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 04:03:37 by almichel          #+#    #+#             */
/*   Updated: 2024/07/15 19:51:02 by almichel         ###   ########.fr       */
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
	this->_stock_nbr = nb << _stock_bits;
	
}

Fixed::Fixed(const float nb)
{
	std::cout <<  "Float constructor called" << std::endl;
	this->_stock_nbr = roundf(nb * (1 << _stock_bits));
	
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

Fixed &Fixed::operator=(const Fixed &rhs) 
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &rhs)
		this->_stock_nbr = rhs.getRawBits();
	return *this;
}


bool		Fixed::operator>(Fixed const & rhs)
{
	if(getRawBits() > rhs.getRawBits())
		return 1;
	return 0;
}

bool		Fixed::operator<(Fixed const & rhs)
{
	if(getRawBits() < rhs.getRawBits())
		return 1;
	return 0;
}

bool		Fixed::operator>=(Fixed const & rhs)
{
	if(getRawBits() >= rhs.getRawBits())
		return 1;
	return 0;
}

bool		Fixed::operator<=(Fixed const & rhs)
{
	if(getRawBits() <= rhs.getRawBits())
		return 1;
	return 0;
}

bool		Fixed::operator==(Fixed const & rhs)
{
	if(getRawBits() == rhs.getRawBits())
		return 1;
	return 0;
}

bool		Fixed::operator!=(Fixed const & rhs)
{
	if(getRawBits() != rhs.getRawBits())
		return 1;
	return 0;
}

Fixed		Fixed::operator+(Fixed const & rhs)
{
	return(Fixed(toFloat() + rhs.toFloat()));
}

Fixed		Fixed::operator-(Fixed const & rhs)
{
	return(Fixed(toFloat() - rhs.toFloat()));
}


Fixed		Fixed::operator/(Fixed const & rhs)
{
	if(rhs.toFloat() == 0)
			std::cout << "division by 0 is undefined value is unpredictable" << std::endl;
	return(Fixed(toFloat() / rhs.toFloat()));
}


Fixed		Fixed::operator*(Fixed const & rhs)
{
	return(Fixed(toFloat() * rhs.toFloat()));
}

Fixed			&Fixed::operator++()
{
	this->_stock_nbr++;
	return(*this);
}

Fixed			Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return(temp);
}

Fixed			&Fixed::operator--()
{
	this->_stock_nbr--;
	return(*this);
}

Fixed			Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return(temp);
}

int Fixed::getRawBits(void) const
{
	return (this->_stock_nbr);
}

void Fixed::setRawBits(int const raw)
{
	this->_stock_nbr = raw;
}

float Fixed::toFloat( void ) const
{
	 return static_cast<float>( this->getRawBits() ) / ( 1 << _stock_bits);
}

int Fixed::toInt(void) const
{
	return this->_stock_nbr >> _stock_bits;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	if(a.getRawBits() < b.getRawBits())
		return(a);
	return(b);
}

Fixed	Fixed::min(Fixed const &a, Fixed const  &b)
{
	if(a.getRawBits() < b.getRawBits())
		return(a);
	return(b);
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	if(a.getRawBits() > b.getRawBits())
		return(a);
	return(b);
}
Fixed	Fixed::max(Fixed const &a, Fixed const  &b)
{
	if(a.getRawBits() > b.getRawBits())
		return(a);
	return(b);
}
