/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:36:34 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/12 16:52:00 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>

int main(int ac, char** av) {
	if (ac != 2) {
		std::cerr << "Please provide one argument. (database)" << std::endl;
		return (1);
	}
	std::ifstream inFile;
	inFile.open(av[1]);
    if (!inFile){
        std::cerr << "Failed to open file!" << std::endl;
        return (1);
    }
	std::string temp;
	while (std::getline(inFile, temp)){
        std::cout << temp << std::endl;
		//analyze line
    }
	inFile.close();
	return (0);
}
