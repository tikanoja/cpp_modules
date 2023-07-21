/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:16:42 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/21 15:17:24 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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

void	Contact::setFirstname(std::string name)
{
	this->firstname = name;
}

void	Contact::setLastname(std::string name)
{
	this->lastname = name;
}

void	Contact::setNickname(std::string name)
{
	this->nickname = name;
}

void	Contact::setPhonenumber(std::string phonenumber)
{
	this->phonenumber = phonenumber;
}

void	Contact::setSecret(std::string secret)
{
	this->secret = secret;
}

void	Contact::setIndex(int i)
{
	this->index = i;
}

std::string	Contact::getFirstname()
{
	return (this->firstname);
}

std::string	Contact::getLastname()
{
	return (this->lastname);
}

std::string	Contact::getNickname()
{
	return (this->nickname);
}

std::string	Contact::getPhonenumber()
{
	return (this->phonenumber);
}

std::string	Contact::getSecret()
{
	return (this->secret);
}

int	Contact::getIndex()
{
	return (this->index);
}
