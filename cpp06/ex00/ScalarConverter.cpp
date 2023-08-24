/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:44:59 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/24 12:36:10 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

char ScalarConverter::scChar = 0;
int ScalarConverter::scInt = 0;
float ScalarConverter::scFloat = 0;
double ScalarConverter::scDouble = 0;

// ScalarConverter::ScalarConverter(void) {
// 	std::cout << "ScalarConverter constructor called" << std::endl;
// 	return ;
// }

// ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
// 	std::cout << "ScalarConverter copy constructor called" << std::endl;
// 	*this = copy;
// 	return ;
// }

// //muista täyttää tähä oikeet valuet
// ScalarConverter& ScalarConverter::operator=(const ScalarConverter &copy) {
// 	std::cout << "ScalarConverter copy assignment constructor called" << std::endl;
// 	if (this != &copy) {
// 		this->scChar = copy.scChar;
// 		this->scInt = copy.scInt;
// 		this->scFloat = copy.scFloat;
// 		this->scDouble = copy.scDouble;
// 	}
// 	return (*this);
// }

// ScalarConverter::~ScalarConverter(void) {
// 	std::cout << "ScalarConverter destructor called" << std::endl;
// 	return ;
// }
//const- / destructors not needed in static class?

int ScalarConverter::isChar(std::string str) {
	if (str.length() > 1)
		return (1);
	else if ((str[0] >= 0 && str[0] <= 31) || str[0] == 127) {
		std::cout << "a non diplayable character: ";
		return (1);
	}
	else if (str[0] < '0' || str[0] > '9') {
		ScalarConverter::scChar = str[0];
		return (0);
	}
	return (1);
}

int ScalarConverter::isInt(std::string str) {
	int j = 0;
	if (str[j] == '-' || str[j] == '+')
		j = 1;
	for (int i = j; str[i]; i++) {
		if (str[i] < '0' || str[i] > '9')
			return (1);
	}
	std::istringstream iss(str);
	if (iss >> ScalarConverter::scInt)
		return (0);
	return (1);
}

int ScalarConverter::isFloat(std::string str) {
	(void)str;
	return (1);
}

int ScalarConverter::isDouble(std::string str) {
	(void)str;
	return (1);
}

std::string ScalarConverter::detectType(std::string str) { //mita me saimme?
	if (!ScalarConverter::isChar(str))
		return ("a char.");
	else if (!ScalarConverter::isInt(str))
		return ("an int.");
	else
		return ("not a valid input. Forget about it!");
}

// int ScalarConverter::inputValidation(std::string str) { //tsekkaa onko valid input
// 	std::cout << str << std::endl;

// 	return ;
// }

void ScalarConverter::convert(std::string str) { //do the magic
	std::cout << "Converting \"" << str << "\"" << ", which is ";
	//input validation() (onko whitespace, ???)

	//detect type()
	std::cout << detectType(str) << std::endl;
	//convert from string to actual type
	//convert to the other three types (CHAR, INT, FLOAT, DOUBLE)
	//print 'em
	return ;
}
