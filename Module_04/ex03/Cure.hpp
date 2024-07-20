/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 02:37:09 by almichel          #+#    #+#             */
/*   Updated: 2024/07/20 02:49:40 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public : 

        Cure();
        Cure(Cure const & src);
        ~Cure();
        Cure &     operator=(Cure const & rhs);

        AMateria* clone() const;
		void use(ICharacter& target);

    private :

};

#endif