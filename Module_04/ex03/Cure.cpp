/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 02:37:02 by almichel          #+#    #+#             */
/*   Updated: 2024/07/20 04:42:52 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    this->_type = "cure";
    
}

Cure::Cure(Cure const &src) : AMateria(src)
{
    *this = src;
    
}

Cure &Cure::operator=(Cure const & rhs)
{
    AMateria::operator=(rhs);
	return *this;
}

Cure::~Cure()
{

}

AMateria* Cure::clone() const
{
	AMateria* clone = new Cure();

	return clone;
}


void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
