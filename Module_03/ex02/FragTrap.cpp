/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:24:28 by almichel          #+#    #+#             */
/*   Updated: 2024/07/19 04:30:28 by almichel         ###   ########.fr       */
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

void FragTrap::attack(const std::string &target)
{
	if (this->_hitPoints > 0)
	{
		if  (this->_energyPoints > 0)
		{
			this->_energyPoints--;
			std::cout << "FragTrap " << this->_name << " attacks " << target <<", causing " << this->_attackDamage << " point(s) of damage!\n";
		}
		else
		{
			std::cout << "FragTrap " << this->_name << " doesn't have enough energy points" << std::endl;
			return ;
		}

	}
	else
		std::cout << "FragTrap " << this->_name << " doesn't have enough hit points" << std::endl;

}

void FragTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "FragTrap " << this->_name << " takes " << amount <<  "points of damage!" << std::endl;
}