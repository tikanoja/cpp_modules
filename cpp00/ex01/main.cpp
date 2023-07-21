/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:51:53 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/19 17:26:28 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	PhoneBook 	pb;
	Contact		contact;
	std::string	input;
	
	pb.setSize(0);
	std::cout << "Hi, welcome to PhoneBook3000!" << std::endl;
	while (1)
	{
		std::cout << std::endl << "What would you like to do? (ADD, SEARCH or EXIT)" << std::endl;
		std::getline(std::cin, input);
		std::cout << std::endl;
		if (input == "ADD")
		{
			if (pb.getSize() == 8)
			{
				pb.rotate_contacts(&pb);
				pb.setContact(7, contact);
			}
			else
			{
				pb.setContact(pb.getSize(), contact);
				pb.setSize(pb.getSize() + 1);
			}
		}
		else if (input == "SEARCH")
			pb.display_contacts();
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Sorry, I didn't get that.. Please use commands ADD, SEARCH or EXIT." << std::endl;
    }
	std::cout << "Thanks buddy see ya later! Meanwhile I will erase all of your contacts." << std::endl;
	return (0);
}
