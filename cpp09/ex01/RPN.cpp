/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:24:29 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/18 10:19:46 by ttikanoj         ###   ########.fr       */
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
		while (!this->numstack.empty())
			this->numstack.pop();
		this->numstack = other.numstack;
	}
	return (*this);
}

void RPN::calculate(std::string input) {
	std::string token;
	std::istringstream iss(input);
	float num1, num2, res;
	while (iss >> token) { //tokenizes input based on whitespaces
		if (token == "+" || token == "-" || token == "*" || token == "/") { //OPERATOR
			if (numstack.size() < 2)
				throw RPN::SyntaxException();
			num2 = numstack.top();
			numstack.pop();
			num1 = numstack.top();
			numstack.pop();
			if (token == "+") {
                res = num1 + num2;
            } else if (token == "-") {
                res = num1 - num2;
            } else if (token == "*") {
                res = num1 * num2;
            } else if (token == "/") {
                if (num2 == 0)
					throw RPN::DivisionException();
                res = num1 / num2;
            }
			numstack.push(res);
		} else if (std::istringstream(token) >> res) { //OPERAND
			if (res < -9 || res > 9)
				throw RPN::OperandException();
			numstack.push(res);
		} else //INVALID TOKEN
			throw RPN::TokenException();
	}
	if (numstack.size() != 1)
		throw RPN::SyntaxException();
	std::cout << numstack.top() << std::endl;
	return ;
}

const char* RPN::SyntaxException::what() const throw() {
	return ("Syntax error.\0");
}

const char* RPN::DivisionException::what() const throw() {
	return ("Trying to divide by zero.\0");
}

const char* RPN::OperandException::what() const throw() {
	return ("Operand too big/small.\0");
}

const char* RPN::TokenException::what() const throw() {
	return ("Invalid token.\0");
}
