/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:24:25 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/17 19:40:18 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char** av) {
	RPN calculator;
	if (ac != 2) {
		std::cerr << "usage: ./RPN \"8 9 * 9 - 9 - 9 - 4 - 1 +\"" << std::endl;
		return (1);
	}
	std::string input = av[1];
	calculator.calculate(input);
	//validate input ??
	return (0);
}
