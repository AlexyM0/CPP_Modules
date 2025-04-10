/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 04:21:24 by almichel          #+#    #+#             */
/*   Updated: 2024/07/20 04:21:26 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("Default name")
{
	for(int i = 0; i < 4; i++)
		_inventory[i] = 0;
}

Character::Character(std::string const &name): _name(name)
{
	for(int i = 0; i < 4; i++)
		_inventory[i] = 0;
}

Character::Character(Character const & src)
{
	for(int i = 0; i < 4; i++)
		_inventory[i] = 0;
    *this = src;
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != 0)
			delete _inventory[i];
	}
}

Character&     Character::operator=(Character const & rhs)
{
	std::cout << "je passe ici" << std::endl;
	this->_name = rhs._name;
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != 0)
		{
			delete _inventory[i];
			_inventory[i] = 0;
		}
	}

	for	(int i = 0; i < 4; i++)
	{
		if(rhs._inventory[i] != 0)
			this->_inventory[i] = rhs._inventory[i]->clone();
	}
	return *this;
}

std::string const & Character::getName() const
{
	return(this->_name);
}

void Character::equip(AMateria *m)
{
	int i = 0;
	while(i < 4 && _inventory[i] != 0)
		i++;
	if(i < 4)
		_inventory[i] = m;
	return ;
}

void Character::unequip(int idx)
{
	if (check_valide_index(idx) == true)
		this->_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter &target)
{
	if(check_valide_index(idx) == true)
		this->_inventory[idx]->use(target);
}

bool Character::check_valide_index(int idx)
{
	if(idx < 0 || idx > 3)
	{
		std::cout << "idx must be bettween 0 and 3" << std::endl;
		return false;
	}
	if(_inventory[idx] == 0)
	{
		std::cout << "no materia at this index" << std::endl;
		return false;
	}
	return true;
}