/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:40:38 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/19 17:25:00 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iostream>


class PhoneBook
{
public:
	Contact contacts[8];
	int		size;
	void	display_contacts();
	void	choose_contact();
	void	rotate_contacts(PhoneBook *pb);
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
	std::cout << "     index|first name| last name|  nickname" << std::endl;
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
	std::cout << std::endl;
	PhoneBook::choose_contact();
}

void PhoneBook::choose_contact()
{
    std::string input;
    int index = 0;

    std::cout << "Please enter the index of the desired contact." << std::endl;
    std::getline(std::cin, input);
    
    if (input.length() != 1 || input[0] < '0' || input[0] >= '0' + size)
    {
        std::cout << "Invalid input. Please enter a number between 0 and " << size - 1 << "." << std::endl;
        PhoneBook::choose_contact();
        return;
    }
    
    index = input[0] - '0';
    std::cout << std::endl;
    std::cout << "First name        : " << contacts[index].firstname << std::endl;
    std::cout << "Last name         : " << contacts[index].lastname << std::endl;
    std::cout << "Nickname          : " << contacts[index].nickname << std::endl;
    std::cout << "Phone number      : " << contacts[index].phonenumber << std::endl;
    std::cout << "Darkest secret... : " << contacts[index].secret << std::endl;
}

void PhoneBook::rotate_contacts(PhoneBook *pb)
{
	int i = 1;
	while (i <= 7)
	{
		pb->contacts[i - 1] = pb->contacts[i];
		i++;
	}
}
#endif
