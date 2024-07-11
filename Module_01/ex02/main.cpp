/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 03:48:59 by almichel          #+#    #+#             */
/*   Updated: 2024/07/11 04:00:50 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;
	
	std::cout << "Address :\n";
	std::cout << &brain << '\n';
	std::cout << &stringPTR << '\n';
	std::cout << &stringREF << '\n';
	std::cout << '\n';
	std::cout << "Value :\n";
	std::cout << brain << '\n';
	std::cout << *stringPTR << '\n';
	std::cout << stringREF << '\n';
	return (0);
}