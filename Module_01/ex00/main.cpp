/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 02:47:23 by almichel          #+#    #+#             */
/*   Updated: 2024/07/11 02:54:19 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *jean;

	jean = newZombie("jean");
	jean->announce();
	randomChump("alexis");
	delete jean;
	return (0);
}
