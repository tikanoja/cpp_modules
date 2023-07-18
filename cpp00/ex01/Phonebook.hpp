/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:40:38 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/18 13:46:24 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iostream>


class PhoneBook
{
	//private:
	public:
	Contact contacts[8];

	//SETTERS
	int		size;
	//constructor()
	//destructor()
	//add()
	void	display_contacts();
	
	//GETTERS
	//get_contact()
};

void	PhoneBook::display_contacts()
{
	int i = 0;
	int j = 0;

	if (size == 0)
	{
		std::cout << "Please add something first!" << std::endl;
		return ;
	}
	std::cout << "index     |first name|last name |nickname  " << std::endl;
	while (i < size)
	{
		std::cout << "         " << i << "|";
		if (contacts[i].firstname.length() > 9)
			std::cout << contacts[i].firstname.substr(0, 9) << ".";
		else
		{
			j = contacts[i].firstname.length();
			j = 10 - j;
			while (j)
			{
				std::cout << " ";
				j--;
			}
			std::cout << contacts[i].firstname;
		}
		std::cout << "|";
		if (contacts[i].lastname.length() > 9)
			std::cout << contacts[i].lastname.substr(0, 9) << ".";
		else
		{
			j = contacts[i].lastname.length();
			j = 10 - j;
			while (j)
			{
				std::cout << " ";
				j--;
			}
			std::cout << contacts[i].lastname;
		}
		std::cout << "|";
		if (contacts[i].nickname.length() > 9)
			std::cout << contacts[i].nickname.substr(0, 9) << ".";
		else
		{
			j = contacts[i].nickname.length();
			j = 10 - j;
			while (j)
			{
				std::cout << " ";
				j--;
			}
			std::cout << contacts[i].nickname << std::endl;
		}
		i++;
	}
}

#endif
