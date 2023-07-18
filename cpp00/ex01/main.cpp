/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:51:53 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/18 13:31:47 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contact	add_contact(void)
{
	Contact newContact;

	while (1){
		std::cout << "Enter first name: ";
		std::getline(std::cin, newContact.firstname);
		if (newContact.firstname.length() == 0)
			std::cout << "Please enter something..." << std::endl;
		else
			break;
	}
	while (1){
		std::cout << "Enter last name: ";
		std::getline(std::cin, newContact.lastname);
		if (newContact.lastname.length() == 0)
			std::cout << "Please enter something..." << std::endl;
		else
			break;
	}
	while (1){
		std::cout << "Enter nickname: ";
		std::getline(std::cin, newContact.nickname);
		if (newContact.nickname.length() == 0)
			std::cout << "Please enter something..." << std::endl;
		else
			break;
	}
	while (1){
		std::cout << "Enter phone number: ";
		std::getline(std::cin, newContact.phonenumber);
		if (newContact.phonenumber.length() == 0)
			std::cout << "Please enter something..." << std::endl;
		else
			break;
	}
	while (1){
		std::cout << "Enter your darkest secret: ";
		std::getline(std::cin, newContact.secret);
		if (newContact.secret.length() == 0)
			std::cout << "Please enter something..." << std::endl;
		else
			break;
	}
	return (newContact);
}

void	rotate_contacts(PhoneBook *pb)
{
	int i = 1;
	while (i <= 7)
	{
		pb->contacts[i - 1] = pb->contacts[i];
		i++;
	}
}

int	main(void)
{
	PhoneBook 	pb;
	std::string	input;
	
	pb.size = 0;
	std::cout << "Hi, welcome to PhoneBook3000!" << std::endl;
	while (input != "EXIT")
	{
		std::cout << std::endl << "What would you like to do? (ADD, SEARCH or EXIT)" << std::endl;
		std::getline(std::cin, input);
		std::cout << std::endl;
		if (input == "ADD")
		{
			if (pb.size == 7)
				rotate_contacts(&pb);
			pb.contacts[pb.size] = add_contact();
			if (pb.size < 7)
				pb.size++;
		}
		else if (input == "SEARCH")
		{
			pb.display_contacts();

		}
		else if (input != "EXIT")
			std::cout << "Sorry, I did not get that.. Please use commands ADD, SEARCH or EXIT." << std:: endl;
	}
	std::cout << "Thanks buddy see ya later! Meanwhile I will erase your contacts." << std::endl;
	return (0);
}
