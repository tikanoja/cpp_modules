/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:44:59 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/24 17:03:43 by ttikanoj         ###   ########.fr       */
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
	if (str[str.length() - 1] != 'f')
		return (1);
	if (str == "-inff") {
		ScalarConverter::scFloat = -INFINITY;
		return (0);
	}
	else if (str == "+inff") {
		ScalarConverter::scFloat = +INFINITY;
		return (0);
	}
	else if (str == "nanf") {
		ScalarConverter::scFloat = 0.0f / 0.0f;
		return (0);
	}	
	int sign = 0;
	int dot = 0;
	int ecount = 0;
	if (str[sign] == '-' || str[sign] == '+')
		sign = 1;
	for (int i = sign; i < (int)str.length() - 1; i++) { //onkohan toi cast ok?
		if (str[i] == '.') {
			if ((sign == 0 && i == 0) || (sign == 1 && i == 1))
				return (1);
			dot++;
			continue ;
		}
		else if (str[i] == 'e' && dot == 1) {
			if (str[i - 1] < '0' || str[i - 1] > '9' || str[i + 1] < '0' || str[i + 1] > '9')
				return (1);
			ecount++;
			continue ;
		}
		if (str[i] < '0' || str[i] > '9')
			return (1);
	}
	if (dot != 1 || ecount > 1 || str[str.length() - 2] == '.')
		return (1);
	str[str.length() - 1] = '\0';
	std::istringstream iss(str);
	if (iss >> ScalarConverter::scFloat)
		return (0);
	return (1);
}

int ScalarConverter::isDouble(std::string str) {
	if (str == "-inf") {
		ScalarConverter::scDouble = -INFINITY;
		return (0);
	}
	else if (str == "+inf") {
		ScalarConverter::scDouble = +INFINITY;
		return (0);
	}
	else if (str == "nan") {
		ScalarConverter::scDouble = 0.0 / 0.0;
		return (0);
	}	
	int sign = 0;
	int dot = 0;
	int ecount = 0;
	if (str[sign] == '-' || str[sign] == '+')
		sign = 1;
	for (int i = sign; str[i]; i++) { //onkohan toi cast ok?
		if (str[i] == '.') {
			if ((sign == 0 && i == 0) || (sign == 1 && i == 1))
				return (1);
			dot++;
			continue ;
		}
		else if (str[i] == 'e' && dot == 1) {
			if (str[i - 1] < '0' || str[i - 1] > '9' || str[i + 1] < '0' || str[i + 1] > '9')
				return (1);
			ecount++;
			continue ;
		}
		if (str[i] < '0' || str[i] > '9')
			return (1);
	}
	if (dot != 1 || ecount > 1 || str[str.length() - 1] == '.')
		return (1);
	str[str.length() - 1] = '\0';
	std::istringstream iss(str);
	if (iss >> ScalarConverter::scDouble)
		return (0);
	return (1);
}

std::string ScalarConverter::detectType(std::string str) { //mita me saimme?
	if (!ScalarConverter::isChar(str))
		return ("a char.");
	else if (!ScalarConverter::isInt(str))
		return ("an int.");
	else if (!ScalarConverter::isFloat(str))
		return ("a float.");
	else if (!ScalarConverter::isDouble(str))
		return ("a double.");
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
	std::cout << scFloat << std::endl;
	//convert from string to actual type
	//convert to the other three types (CHAR, INT, FLOAT, DOUBLE)
	//print 'em
	return ;
}
