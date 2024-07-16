/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 04:16:50 by almichel          #+#    #+#             */
/*   Updated: 2024/07/16 17:42:33 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap john("John");
	ScavTrap thiery("thiery");

	john.displayInfo();
	john.attack("thiery");
	thiery.takeDamage(john.GetAttack());
	john.guardGate();
	return 0;
}