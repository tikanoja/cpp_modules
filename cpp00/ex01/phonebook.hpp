/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:16:06 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/18 09:31:08 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>

class Contact
{
	//private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	secret;
	int			index;

	//public:
	//constructor
	//destructor

	//GETTERS AND SETTERS
	//std::string get_info (for each of the elements above)
	//void		set_info (for each of the elements above)
};

class PhoneBook
{
	//private:
	Contact MyContacts[8];
	int		size;

	//public:
	//SETTERS
	//constructor()
	//destructor()
	//add()
	//search()
	//print()
	
	//GETTERS
	//get_contact()
};

#endif
