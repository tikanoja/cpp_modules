/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:44:59 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/25 16:08:32 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

char ScalarConverter::scChar = 0;
int ScalarConverter::scInt = 0;
float ScalarConverter::scFloat = 0;
double ScalarConverter::scDouble = 0;
int ScalarConverter::scType = 0;

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
//		this->scType = copy.scType;
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
	std::istringstream iss(str);
	if (iss >> ScalarConverter::scDouble)
		return (0);
	return (1);
}

int ScalarConverter::detectType(std::string str) {
	std::cout << "Converting \"" << str << "\"" << ", which is ";
	if (!ScalarConverter::isChar(str)) {
		std::cout << "a char." << std::endl;
		return (1);
	}
	else if (!ScalarConverter::isInt(str)) {
		std::cout << "an int." << std::endl;
		return (2);
	}
	else if (!ScalarConverter::isFloat(str)) {
		std::cout << "a float." << std::endl;
		return (3);
	}
	else if (!ScalarConverter::isDouble(str)) {
		std::cout << "a double." << std::endl;
		return (4);
	}
	else
		std::cout << "not a valid input. Forget about it!" << std::endl;
	return (0);
}

void ScalarConverter::castOthers(void) {
	if (scType == 1) { //from char
		ScalarConverter::scInt = static_cast <int> (ScalarConverter::scChar);
		ScalarConverter::scFloat = static_cast <float> (ScalarConverter::scChar);
		ScalarConverter::scDouble = static_cast <double> (ScalarConverter::scChar);
	}
	else if (scType == 2) { //from int
		ScalarConverter::scChar = static_cast <char> (ScalarConverter::scInt);
		ScalarConverter::scFloat = static_cast <float> (ScalarConverter::scInt);
		ScalarConverter::scDouble = static_cast <double> (ScalarConverter::scInt);
	}
	else if (scType == 3) {//from float
		ScalarConverter::scChar = static_cast <char> (ScalarConverter::scFloat);
		ScalarConverter::scInt = static_cast <int> (ScalarConverter::scFloat);
		ScalarConverter::scDouble = static_cast <double> (ScalarConverter::scFloat);
	}
	else {//from double
		ScalarConverter::scChar = static_cast <char> (ScalarConverter::scDouble);
		ScalarConverter::scInt = static_cast <int> (ScalarConverter::scDouble);
		ScalarConverter::scFloat = static_cast <float> (ScalarConverter::scDouble);
	}
	return ;
}

void ScalarConverter::printVariables(void) {
	std::cout << "char: " << ScalarConverter::scChar << std::endl;
	std::cout << "int: " << ScalarConverter::scInt << std::endl;
	std::cout << "float: " << ScalarConverter::scFloat;
	if (ScalarConverter::scFloat - (int)ScalarConverter::scFloat == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << "double: " << ScalarConverter::scDouble;
	if (ScalarConverter::scDouble - (int)ScalarConverter::scDouble == 0)
		std::cout << ".0";
	std::cout << std::endl;
	return ;
}

int ScalarConverter::convert(std::string str) {
	ScalarConverter::scType = detectType(str);
	if (ScalarConverter::scType == 0)
		return (1);
	//convert to the other three types (CHAR, INT, FLOAT, DOUBLE)
	// if (ScalarConverter::scType != 0)
	castOthers();
	printVariables();
	//print 'em
	return (0);
}
