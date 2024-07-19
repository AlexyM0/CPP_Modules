/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:04:21 by almichel          #+#    #+#             */
/*   Updated: 2024/07/19 01:43:58 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:

        Cat();
        Cat(std::string name);
        Cat(Animal const &src);
        Cat &operator=(Cat const &rhs);
        ~Cat();

        void makeSound(void) const;
        Brain &getBrain() const;

    private:

         Brain* _brain;

};

#endif