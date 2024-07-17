/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 00:29:38 by almichel          #+#    #+#             */
/*   Updated: 2024/07/16 18:16:53 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	
}

ClapTrap::ClapTrap(std::string name) : _name(name),  _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor for ClapTrap: " << this->_name << " has been called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    *this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & rhs)
{
	if ( this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Desctructor for ClapTrap: " << this->_name << " has been called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints > 0)
	{
		if  (this->_energyPoints > 0)
		{
			this->_energyPoints--;
			std::cout << "ClapTrap " << this->_name << " attacks " << target <<", causing " << this->_attackDamage << " point(s) of damage!\n";
		}
		else
		{
			std::cout << "ClapTrap " << this->_name << " doesn't have enough energy points" << std::endl;
			return ;
		}

	}
	else
		std::cout << "ClapTrap " << this->_name << " doesn't have enough hit points" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "ClapTrap " << this->_name << " takes " << amount <<  "points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints += amount;
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " recovers " << amount <<  "hit points!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " t have enough energy points" << std::endl;
}

void ClapTrap::displayInfo()
{
	std::cout 	<< "Name: " << this->_name << std:: endl
				<< "HP: " << this->_hitPoints << std::endl 
				<< "Energy: " << this->_energyPoints << std::endl
				<< "AD: " << this->_attackDamage << std::endl;
}

void ClapTrap::SetAttack(int attack)
{
	if(attack < 0)
	{
		std::cout << "attack can't be a negative value" << std::endl;
		return ; 
	}
	this->_attackDamage = attack;
	return ; 
}

int ClapTrap::GetAttack()
{
	return this->_attackDamage;
}

int ClapTrap::GetEnergy()
{
	return this->_energyPoints;
}

int ClapTrap::GetHp()
{
	return this->_hitPoints;
}

std::string ClapTrap::GetName()
{
	return this->_name;
}