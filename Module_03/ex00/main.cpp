/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 04:16:50 by almichel          #+#    #+#             */
/*   Updated: 2024/07/16 04:22:14 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap john("John");
	ClapTrap thiery("Thiery");
	
	john.SetAttack(1);
	john.attack(thiery.GetName());
	thiery.takeDamage(john.GetAttack());
	john.attack(thiery.GetName());
	thiery.takeDamage(john.GetAttack());
	thiery.displayInfo();
	john.displayInfo();
	return 0;
}