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
private:
	Contact contacts[8];
	int		size;

public:
	void	display_contacts();
	void	choose_contact();
	void	rotate_contacts(PhoneBook *pb);
	int		getSize();
	void	setSize(int n);
	void	setContact(int index, Contact contact);
	Contact	getContact(int index);
};

#endif
