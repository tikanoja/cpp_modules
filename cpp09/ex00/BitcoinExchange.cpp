/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:35:36 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/18 09:36:22 by ttikanoj         ###   ########.fr       */
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
		this->database.clear();
		std::map<std::string, float>::const_iterator it;
		for (it = other.database.begin(); it != other.database.end(); it++) { //vai ++it ???
			this->database[it->first] = it->second;
		}
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
	if (line != "date,exchange_rate")
		throw BitcoinExchange::FormatException();
	while (std::getline(inFile, line)){
		std::istringstream iss(line); //convert line to stringstream
		std::getline(iss, date, ','); //write part before comma to date
		std::getline(iss, value_str, '\n'); //write part after comma to value string
		std::istringstream issvalue(value_str);
		if (!(issvalue >> value)) { //convert ss to float
        	std::cerr << "Failed to convert price to number." << std::endl;
        	throw BitcoinExchange::StrToFloatException();
    	}
		database[date] = value;
    }

	inFile.close();
	return ;
}

int BitcoinExchange::validateDate(std::string date) {
	std::string year, month, day;
	int month_int, day_int;
	
	std::istringstream iss(date);
	std::getline(iss, year, '-');
	std::getline(iss, month, '-');
	std::getline(iss, day, '\0');
	
	if (year.length() != 4 || month.length() != 2 || day.length() != 2) 
		return (1);
	
	for (int i = 0; i < 4; i++) {
		if (!isdigit(year[i]))
			return (1);
	}
	for (int i = 0; i < 2; i++) {
		if (!isdigit(month[i]))
			return (1);
	}
	for (int i = 0; i < 2; i++) {
		if (!isdigit(day[i]))
			return (1);
	}
	
	iss.clear();
	iss.str(month);
	iss >> month_int;
	iss.clear();
	iss.str(day);
	iss >> day_int;
	
	if (month_int > 12 || day_int > 31)
		return (1);
	return (0);
}

std::string BitcoinExchange::parseNewKey(int year, int month, int day) {
	std::string year_str, month_str, day_str;
	std::string newKey;
	std::stringstream ss;
	ss << year;
	year_str = ss.str();
	ss.str("");

	ss << month;
	month_str = ss.str();
	if (month < 10)
		month_str.insert(0, "0");
	ss.str("");
	
	ss << day;
	day_str = ss.str();
	if (day < 10)
		day_str.insert(0, "0");
	newKey = year_str + "-" + month_str + "-" + day_str;
	return (newKey);
}

std::map<std::string, float>::iterator BitcoinExchange::findClosestKey(std::string date) {
	std::string newKey = date;
	std::string year, month, day;
	int year_int, month_int, day_int;
	std::istringstream iss(newKey);
	std::getline(iss, year, '-');
	std::getline(iss, month, '-');
	std::getline(iss, day);
	std::istringstream(year) >> year_int;
	std::istringstream(month) >> month_int;
	std::istringstream(day) >> day_int;
	std::map<std::string, float>::iterator it = database.begin();
	std::string oldestEntry = it->first;
	while (newKey >= oldestEntry) {
		if(day_int > 0)
			day_int--;
		else if (month_int > 0) {
			month_int--;
			day_int = 31;
		} else {
			year_int--;
			month_int = 12;
			day_int = 31;
		}
		newKey = parseNewKey(year_int, month_int, day_int);
		it = database.find(newKey);
		if (it != database.end())
			return (it);
	}
	it = database.end();
	return (it);
}

void BitcoinExchange::processInput(const char* input) {
	std::string input_str(input);
	
	std::ifstream inFile;
	inFile.open(input_str);
    if (!inFile)
		throw BitcoinExchange::FileException();
		
	std::string line, date, value_str;
	float value;
	std::map<std::string, float>::iterator it;
	
	std::getline(inFile, line); //skip first line
	if (line != "date | value")
		throw BitcoinExchange::FormatException();
	while (std::getline(inFile, line)){
		std::istringstream iss(line); //convert line to stringstream
		std::getline(iss, date, '|'); //write part before pipe to date
		if (date[date.length() - 1] == ' ')
			date.pop_back(); //removing extra space before float
		std::getline(iss, value_str, '\n'); //write part after comma to value string
		std::istringstream issvalue(value_str);
		if (!(issvalue >> value)) { //convert ss to float
        	std::cerr << "Failed to convert price to number." << std::endl;
        	throw BitcoinExchange::StrToFloatException();
    	}
		
		//check that date is valid
		if (validateDate(date)) {
			std::cerr << "Error: bad input => " << date << std::endl;
			continue ;
		} else if (value < 0) {
			std::cerr << "Error: not a positive number." << std::endl;
			continue ;
		} else if (value > 1000) {
			std::cerr << "Error: too large number." << std::endl;
			continue ;
		}
		
		it = database.find(date);
		if (it == database.end()) { // we did not find it
			it = findClosestKey(date);
			if (it == database.end()) {
				std::cerr << "Error: date too early, no reference data." << std::endl;
				continue ;
			}
		}
			
		std::cout << date << " => " << value << " = ";
		std::cout << std::fixed << std::setprecision(2) << it->second * value << std::endl;
    }
	
	inFile.close();
	return ;
}

const char* BitcoinExchange::FileException::what() const throw() {
	return ("Could not open file.\0");
}

const char* BitcoinExchange::StrToFloatException::what() const throw() {
	return ("Failed to convert value to float.\0");
}

const char* BitcoinExchange::FormatException::what() const throw() {
	return ("Unexpected format.\0");
}
