/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 04:22:42 by almichel          #+#    #+#             */
/*   Updated: 2024/07/20 04:23:04 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i< 4; i++)
		_Materia_tab[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	for(int i = 0; i< 4; i++)
		_Materia_tab[i] = 0;
    *this = src;
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_Materia_tab[i] != 0)
			delete _Materia_tab[i];
	}
}

MateriaSource&     MateriaSource::operator=(MateriaSource const & rhs)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_Materia_tab[i] != 0)
			delete _Materia_tab[i];
	}
	for(int i = 0; i < 4; i++)
		_Materia_tab[i] = rhs._Materia_tab[i];
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	int i = 0;
	while(i < 4 && _Materia_tab[i] != 0)
		i++;
	if(i < 4)
		_Materia_tab[i] = materia;
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for( int i = 0; i < 4; i++)
	{
		if (_Materia_tab[i]->getType() == type)
			return(_Materia_tab[i]->clone());
	}
	std::cout << "no materia of this type found" << std::endl;
	return (0);
}