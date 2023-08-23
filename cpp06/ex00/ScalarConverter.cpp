/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:44:59 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/23 18:23:34 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {
	std::cout << "ScalarConverter constructor called" << std::endl;
	return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	*this = copy;
	return ;
}

//muista täyttää tähä oikeet valuet jos tulee jotaa private members
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &copy) {
	std::cout << "ScalarConverter copy assignment constructor called" << std::endl;
	if (this != &copy)
		this->foo = copy.foo;
	return (*this);
}

ScalarConverter::~ScalarConverter(void) {
	std::cout << "ScalarConverter destructor called" << std::endl;
	return ;
}

void ScalarConverter::detectType(std::string str) { //mita me saimme?
	
	return ;
}

int ScalarConverter::inputValidation(std::string str) { //tsekkaa onko valid input
	std::cout << str << std::endl;

	return ;
}

void ScalarConverter::convert(std::string str) { //do the magic
	std::cout << str << std::endl;
	//input validation() (onko whitespace, ???)
	//detect type()
	//convert from string to actual type
	//convert to the other three types (CHAR, INT, FLOAT, DOUBLE)
	//print 'em
	return ;
}

// For each exercise, the type conversion must be solved using one specific type of casting.
// Your choice will be checked during defense.
