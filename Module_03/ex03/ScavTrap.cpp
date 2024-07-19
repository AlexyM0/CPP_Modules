/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:15:05 by almichel          #+#    #+#             */
/*   Updated: 2024/07/19 04:27:58 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
	std::cout <<  "Default ScavTrap constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Constructor for ScavTrap: " << this->_name << " has been called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << "copy ScavTrap constructor has been called" << std::endl;
    *this = src;
}

ScavTrap&     ScavTrap::operator=(ScavTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Desctructor for ScavTrap: " << this->_name << " has been called" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints > 0)
	{
		if  (this->_energyPoints > 0)
		{
			this->_energyPoints--;
			std::cout << "ScavTrap " << this->_name << " attacks " << target <<", causing " << this->_attackDamage << " point(s) of damage!\n";
		}
		else
		{
			std::cout << "ScavTrap " << this->_name << " doesn't have enough energy points" << std::endl;
			return ;
		}

	}
	else
		std::cout << "ScavTrap " << this->_name << " doesn't have enough hit points" << std::endl;

}

void ScavTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "ScavTrap " << this->_name << " takes " << amount <<  "points of damage!" << std::endl;
}
