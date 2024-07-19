/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 03:26:14 by almichel          #+#    #+#             */
/*   Updated: 2024/07/19 02:31:19 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	Dog dog;
	
	dog.getBrain().displayIdeas();
	const Animal *Animal_tab[100];
	for(int i = 0; i < 100; i++)
	{
		if (i < 50)
			Animal_tab[i] = new Cat();
		else
			Animal_tab[i] = new Dog();
	}
	for(int i = 0; i < 100; i++)
	{
		Animal_tab[i]->makeSound();
	}
	for(int i = 0; i < 100; i++)
		delete Animal_tab[i];
//	return 0;
	Cat basic;
	{
		Cat tmp = basic;
	}

}
