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
private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	secret;
	int			index;

public:
	Contact		add_contact(void);

	void	setFirstname(std::string name);
	void	setLastname(std::string name);
	void	setNickname(std::string name);
	void	setPhonenumber(std::string phonenumber);
	void	setSecret(std::string secret);
	void	setIndex(int i);

	std::string	getFirstname();
	std::string	getLastname();
	std::string	getNickname();
	std::string	getPhonenumber();
	std::string	getSecret();
	int	getIndex();
};

#endif
