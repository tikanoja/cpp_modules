/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:59:18 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/19 16:27:09 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
public:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	secret;
	int			index;

	Contact		add_contact(void);
};

Contact	Contact::add_contact(void)
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

#endif
