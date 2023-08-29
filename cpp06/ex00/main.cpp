/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:43:55 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/29 13:21:10 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//static_cast is the simplest form of casting.
//allows casts that might be illegal so important to check limits!
int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Please provide 1 (one) argument." << std::endl;
		return (1);
	}
	std::string str = av[1];
	if (ScalarConverter::convert(str))
		return (1);
	return (0);
}
