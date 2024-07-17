/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 04:16:50 by almichel          #+#    #+#             */
/*   Updated: 2024/07/17 16:39:33 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap john("John");
	FragTrap thiery("thiery");

	john.displayInfo();
	john.attack("thiery");
	thiery.takeDamage(john.GetAttack());
	john.highFivesGuys();
	thiery.displayInfo();
	john.displayInfo();
	return 0;
}