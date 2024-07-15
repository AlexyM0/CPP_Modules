/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 03:58:20 by almichel          #+#    #+#             */
/*   Updated: 2024/07/15 19:03:55 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>
#include <string.h>

class Fixed
{
	private :

		int _stock_nbr;
		static const int _stock_bits;
	
	public :
		Fixed();
		Fixed(const int nbr);
		Fixed(const float nb);
		Fixed(const Fixed & other);
		~Fixed();
		
		bool			operator>(Fixed const & rhs);
		bool			operator<(Fixed const & rhs);
		bool			operator>=(Fixed const & rhs);
		bool			operator<=(Fixed const & rhs);
		bool			operator==(Fixed const & rhs);
		bool			operator!=(Fixed const & rhs);
		Fixed &operator=(Fixed const & other);

		Fixed operator*(Fixed const &rhs);
		Fixed operator-(Fixed const &rhs);
		Fixed operator+(Fixed const &rhs);
		Fixed operator/(Fixed const &rhs);

		Fixed			&operator++();
		Fixed			operator++(int);
		Fixed			&operator--();
		Fixed			operator--(int);

		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		
		static Fixed	min(Fixed &a, Fixed &b);
		static Fixed min(Fixed const &a, Fixed const  &b);
		static Fixed max(Fixed &a, Fixed &b);
		static Fixed max(Fixed const &a, Fixed const  &b);

};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif