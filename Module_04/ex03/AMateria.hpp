/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:24:24 by almichel          #+#    #+#             */
/*   Updated: 2024/07/19 17:49:33 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>

class ICharacter;

class AMateria
{
    protected:

        std::string _type;
        
    public:
            
            AMateria();
            AMateria(std::string const &type);
            AMateria(AMateria const &src);
            AMateria &operator=(AMateria const &rhs);
            virtual ~AMateria();
            
            std::string const & getType() const; //Returns the materia type
            virtual AMateria* clone() const = 0;
            virtual void use(ICharacter& target);
    };


#endif