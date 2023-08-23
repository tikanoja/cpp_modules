/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:44:59 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/23 15:45:23 by ttikanoj         ###   ########.fr       */
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

// For each exercise, the type conversion must be solved using one specific type of casting.
// Your choice will be checked during defense.
