/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 03:58:20 by almichel          #+#    #+#             */
/*   Updated: 2024/07/15 04:46:28 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
	private :

		int _stock_nbr;
		static const int _stock_bits;
	
	public :
		Fixed();
		Fixed(const Fixed & other);
		~Fixed();
		Fixed &operator=(Fixed const & other);
		int	getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif