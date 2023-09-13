/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:35:36 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/13 15:07:39 by ttikanoj         ###   ########.fr       */
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
	float value;
	
	std::getline(inFile, line); //skip first line
	while (std::getline(inFile, line)){
		std::istringstream iss(line); //convert line to stringstream
		std::getline(iss, date, ','); //write part before comma to date
		iss >> std::fixed >> std::setprecision(2) >> value; //write part after comma to value w precision of 2
		if (iss.fail()) {
        	std::cerr << "Failed to convert numeric value." << std::endl;
        	throw BitcoinExchange::StringstreamException();
    	}
		database[date] = value; //plug key value into map
    }
	inFile.close();
	return ;
}

const char* BitcoinExchange::FileException::what() const throw() {
	return ("could not open file.\0");
}

const char* BitcoinExchange::StringstreamException::what() const throw() {
	return ("Failed to convert value to float.\0");
}
