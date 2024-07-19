/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:22:19 by almichel          #+#    #+#             */
/*   Updated: 2024/07/19 04:26:48 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout <<  "Default Diamond constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name)
{
	this->_name  = name;
	ClapTrap::_name = name + "_clap_name";
	FragTrap::_attackDamage = 30;
	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	std::cout << "Constructor for DiamondTrap: " << this->_name << " has been called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) :  ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "copy DiamondTrap constructor has been called" << std::endl;
    *this = src;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	this->_name = rhs._name;
	ClapTrap::_name = (this->_name + "_clap_name");
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_attackDamage = rhs._attackDamage;

	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Desctructor for DiamondTrap: " << this->_name << " has been called" << std::endl;
}

void DiamondTrap::displayInfo()
{
		std::cout 	<< "Name: " << this->_name << std:: endl
					<< "HP: " << this->_hitPoints << std::endl 
					<< "Energy: " << this->_energyPoints << std::endl
					<< "AD: " << this->_attackDamage << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout 	<< "My name is: " << this->_name << "\n"
				<< "My ClapTrap name is: " << GetClapTrapName() << std::endl;
}

std::string DiamondTrap::GetClapTrapName()
{
	return ClapTrap::_name;
}

void DiamondTrap::attack(const std::string &target)
{
	if (this->_hitPoints > 0)
	{
		if  (this->_energyPoints > 0)
		{
			this->_energyPoints--;
			std::cout << "DiamondTrap " << this->_name << " attacks " << target <<", causing " << this->_attackDamage << " point(s) of damage!\n";
		}
		else
		{
			std::cout << "DiamondTrap " << this->_name << " doesn't have enough energy points" << std::endl;
			return ;
		}

	}
	else
		std::cout << "DiamondTrap " << this->_name << " doesn't have enough hit points" << std::endl;

}