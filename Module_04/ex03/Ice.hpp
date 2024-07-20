/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 02:38:40 by almichel          #+#    #+#             */
/*   Updated: 2024/07/20 04:26:51 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice :  public AMateria
{
    public :

        Ice();
        Ice(Ice const & src);
        ~Ice();
        Ice &     operator=(Ice const & rhs);

        AMateria* clone() const;
		void use(ICharacter& target);

    private :
};

#endif