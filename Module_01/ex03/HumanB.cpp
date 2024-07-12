/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 01:00:37 by almichel          #+#    #+#             */
/*   Updated: 2024/07/12 01:52:09 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name): name(name)
{

}
HumanB::~HumanB()
{

}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->Weapons->getType() << '\n';
}

void	HumanB::setWeapon(Weapon &Weapon)
{
	this->Weapons = &Weapon;
}