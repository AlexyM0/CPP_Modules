/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:28:12 by almichel          #+#    #+#             */
/*   Updated: 2024/07/10 03:44:09 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"

class Phonebook	{

private:
    Contact _contacts[8];
	int		_index;
public :

	Phonebook();
	~Phonebook();
	void addContactToTab(const Contact& contact);
	
};


#endif