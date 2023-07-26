/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:39:29 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/26 13:40:16 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		if (ac > 2)
			std::cout << "[ Harl gets extremely annoyed at you for passing more than one argument ]" << std::endl;
		if (ac < 2)
			std::cout << "[ Harl is absolutely livid. He really wants one argument! ]" << std::endl;
		return 0;
	}
	Harl harl;
	std::string str;
	str = av[1];
	for (int i = 0; i < (int)str.length(); i++)
		str[i] = std::tolower(str[i]);
	harl.complain(str);
	return (0);
}
