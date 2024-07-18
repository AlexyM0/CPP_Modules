/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:04:21 by almichel          #+#    #+#             */
/*   Updated: 2024/07/18 02:29:12 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
    public:

        Cat();
        Cat(Animal const &src);
        Cat &operator=(Animal const &rhs);
        ~Cat();

        void makeSound(void) const;

    private:

};

#endif