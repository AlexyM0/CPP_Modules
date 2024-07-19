/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:50:34 by almichel          #+#    #+#             */
/*   Updated: 2024/07/19 01:36:28 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::ostringstream oss;
	std::cout << "Default Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		oss << i;
		this->_ideas[i] = "ideas" + oss.str();
		oss.str("");
	}
}

Brain::Brain(std::string type)
{
	std::ostringstream oss;
	std::cout << "Constructor for Brain has beeen called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		oss << i;
		this->_ideas[i] = type + " ideas" + oss.str();
		oss.str("");
	}
}

Brain::Brain(Brain const &src)
{
	*this = src;
}

Brain &Brain::operator=(Brain const & rhs)
{
	if (this != &rhs)
	{
		for(int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Default Brain destructor called" << std::endl;
}

void Brain::displayIdeas()
{
	for(int i = 0; i < 100; i++)
		std::cout << this->_ideas[i] << "\n";

}
