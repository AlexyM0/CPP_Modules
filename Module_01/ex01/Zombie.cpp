/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 02:46:21 by almichel          #+#    #+#             */
/*   Updated: 2024/07/11 03:44:34 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{

}


Zombie::~Zombie()
{
	std::cout << getName() << ": destructor called" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << '\n';
}

std::string Zombie::getName() const
{
	return(this->_name);
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}
