/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:35:36 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/13 19:58:33 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void){
	std::cout << "BitcoinExchange(void) constructor called" << std::endl;
	return ;
}

BitcoinExchange::~BitcoinExchange(void){
	std::cout << "BitcoinExchange destructor called" << std::endl;
	return ;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const& other){
	std::cout << "BitcoinExchange copy constructor called" << std::endl;
	*this = other;
	return ;
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const& other){
	std::cout << "BitcoinExchange assignment operator called" << std::endl;
	if (this != &other) {
		//copy stuff
	}
	return (*this);
}

void BitcoinExchange::checkArgument(int ac) {
	if (ac != 2)
		throw BitcoinExchange::FileException();
}

void BitcoinExchange::extractCsv(void) {
	std::ifstream inFile;
	inFile.open("data.csv");
    if (!inFile)
		throw BitcoinExchange::FileException();
		
	std::string line;
	std::string date;
	std::string value_str;
	float value;
	
	std::getline(inFile, line); //skip first line
	while (std::getline(inFile, line)){
		std::istringstream iss(line); //convert line to stringstream
		std::getline(iss, date, ','); //write part before comma to date
		std::getline(iss, value_str, '\n'); //write part after comma to value string
		std::istringstream issvalue(value_str);
		if (!(issvalue >> value)) {
        	std::cerr << "Failed to convert price to number." << std::endl;
        	throw BitcoinExchange::StrToFloatException();
    	}
		database[date] = value;
    }
	
	inFile.close();
	return ;
}

const char* BitcoinExchange::FileException::what() const throw() {
	return ("could not open file.\0");
}

const char* BitcoinExchange::StrToFloatException::what() const throw() {
	return ("Failed to convert value to float.\0");
}
