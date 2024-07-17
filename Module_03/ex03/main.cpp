/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 04:16:50 by almichel          #+#    #+#             */
/*   Updated: 2024/07/17 18:06:04 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap john("John");
	john.displayInfo();
	john.attack("thiery");

	john.guardGate();
	john.highFivesGuys();
	john.whoAmI();
	return 0;
}