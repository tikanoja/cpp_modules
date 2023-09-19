/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:36:34 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/19 13:03:51 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char** av) {
	BitcoinExchange BtcEx;
	
	try {
		BtcEx.checkArgument(ac); 
		BtcEx.extractCsv();
		BtcEx.processInput(av[1]);
	} catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	return (0);
}
