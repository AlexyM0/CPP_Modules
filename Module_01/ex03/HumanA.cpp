/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 00:36:24 by almichel          #+#    #+#             */
/*   Updated: 2024/07/12 02:20:40 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &Weapons): name(name), Weapons(Weapons)
{

}
HumanA::~HumanA()
{

}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->Weapons.getType() << '\n';
}