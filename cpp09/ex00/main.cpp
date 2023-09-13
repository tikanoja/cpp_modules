/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:36:34 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/13 19:59:43 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//maybe map? date == key, price == value
int main(int ac, char** av) {
	BitcoinExchange BtcEx;
	
	try {
		BtcEx.checkArgument(ac); 
		BtcEx.extractCsv();
		//read input to map
		//process data
	} catch (std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	std::map<std::string, float>::iterator it;
    for (it = BtcEx.database.begin(); it != BtcEx.database.end(); ++it) {
        std::cout << "Key: " << it->first;
        std::cout << ", Value: " << std::fixed << std::setprecision(2) << it->second << std::endl;
    }

	(void)av;
	return (0);
}
