/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 02:38:57 by almichel          #+#    #+#             */
/*   Updated: 2024/07/20 04:33:16 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    this->_type = "ice";
    
}

Ice::Ice(Ice const &src) : AMateria(src)
{
    *this = src;
    
}

Ice &Ice::operator=(Ice const & rhs)
{
    AMateria::operator=(rhs);
	return *this;
}

Ice::~Ice()
{
    
}

AMateria* Ice::clone() const
{
	AMateria* clone = new Ice();

	return clone;
}


void Ice::use(ICharacter &target)
{
    std::cout << "* shoots and ice bolt at " << target.getName() << std::endl;
}
