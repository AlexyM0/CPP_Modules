/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:24:28 by almichel          #+#    #+#             */
/*   Updated: 2025/03/18 12:10:27 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap constructor has been called" << std::endl;
}
FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Constructor for FragTrap: " << this->_name << " has been called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << "copy FragTrap constructor has been called" << std::endl;
    *this = src;
}

FragTrap&     FragTrap::operator=(FragTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "Desctructor for FragTrap: " << this->_name << " has been called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "hey i'm " << this->_name << " let's high fives" << std::endl;
}
