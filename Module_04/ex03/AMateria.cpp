/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amaterie.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:24:19 by almichel          #+#    #+#             */
/*   Updated: 2024/07/19 17:58:06 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
   
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    
}

AMateria::AMateria(AMateria const &src)
{
    *this = src;
}

AMateria::~AMateria()
{

}

AMateria &AMateria::operator=(AMateria const &rhs)
{
    this->_type = rhs._type;
	return *this;
}

std::string const &AMateria::getType(void) const
{
    return (this->_type);
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}
