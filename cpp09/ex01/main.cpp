/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:24:25 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/19 13:03:51 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char** av) {
	RPN calculator;
	if (ac != 2) {
		std::cout << "usage: ./RPN \"8 9 * 9 - 9 - 9 - 4 - 1 +\"" << std::endl;
		return (1);
	}
	std::string input = av[1];
	try {
		calculator.calculate(input);
	} catch (std::exception& e) {
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	return (0);
}
