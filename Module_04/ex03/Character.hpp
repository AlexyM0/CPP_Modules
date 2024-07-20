/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 04:21:04 by almichel          #+#    #+#             */
/*   Updated: 2024/07/20 04:22:00 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
    public:
        Character();
		Character(std::string const &name);
        Character(Character const & src);
        ~Character();
        Character &     operator=(Character const & rhs);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

    private:
		bool check_valide_index(int idx);
		std::string _name;
		AMateria *_inventory[4];
};

#endif