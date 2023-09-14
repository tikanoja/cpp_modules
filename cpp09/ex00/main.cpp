/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:36:34 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/14 14:36:17 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//maybe map? date == key, price == value
int main(int ac, char** av) {
	BitcoinExchange BtcEx;
	
	try {
		BtcEx.checkArgument(ac); 
		BtcEx.extractCsv();
		BtcEx.processInput(av[1]);
	} catch (std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	BtcEx.findClosestKey("1995-03-30");
	// std::map<std::string, float>::iterator it;
    // for (it = BtcEx.database.begin(); it != BtcEx.database.end(); ++it) {
    //     std::cout << "Key: " << it->first;
    //     std::cout << ", Value: " << std::fixed << std::setprecision(2) << it->second << std::endl;
    // }
	return (0);
}
