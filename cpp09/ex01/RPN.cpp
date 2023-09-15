/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:24:29 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/15 16:26:20 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void){
	std::cout << "RPN(void) constructor called" << std::endl;
	return ;
}

RPN::~RPN(void){
	std::cout << "RPN destructor called" << std::endl;
	return ;
}

RPN::RPN(RPN const& other){
	std::cout << "RPN copy constructor called" << std::endl;
	*this = other;
	return ;
}

RPN& RPN::operator=(RPN const& other){
	std::cout << "RPN assignment operator called" << std::endl;
	if (this != &other) {
		//copy stuff
	}
	return (*this);
}

int RPN::isOperator(char c) {
	if (c == '+' || c == '-' || c == '/' || c == '*')
		return (1);
	return (0);
}

int RPN::isNumber(char* c) { //tai vaa std::isdigit(c) ....
	if (*c >= '0' && *c <= '9')
		return (1);
	// tee tää handlaamaa miinukset
	return (0);
}

//-9 -> 9 on valid range.
int RPN::validateInput(char* input) {
	int lastToken = 0;
	for (int i = 0; input[i]; i++) {
		
	}
	return (1);
}

void RPN::calculate(std::string input) {
	//break input to tokens
	(void)input;
	return ;
}

const char* RPN::InputException::what() const throw() {
	return ("Input not valid.\0");
}
