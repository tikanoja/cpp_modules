/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:43:55 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/25 13:21:20 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//static_cast <dest_type> (source);
//static_cast <int> (randomFloat);
int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Please provide 1 (one) argument." << std::endl;
		return (1);
	}
	std::string str = av[1]; //just to be sure...
	if (ScalarConverter::convert(str)) //no need to instantiate (the idea of a static class...)
		return (1);
	return (0);
}
