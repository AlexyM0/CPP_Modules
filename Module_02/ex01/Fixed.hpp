/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 03:58:20 by almichel          #+#    #+#             */
/*   Updated: 2024/07/15 17:19:55 by almichel         ###   ########.fr       */
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
		Fixed &operator=(Fixed const & other);

		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif