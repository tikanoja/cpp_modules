/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:24:29 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/17 19:39:46 by tuukka           ###   ########.fr       */
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

// int RPN::isOperator(char* s, int i) {
// 	if ((s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*') && (s[i + 1] == ' ' || s[i + 1] == '\0'))
// 		return (1);
// 	return (0);
// }

// int RPN::isNumber(char* s, int i) {
// 	if (s[i] >= '0' && s[i] <= '9' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
// 		return (1);
// 	else if ((s[i] == '-' || s[i] == '+') && s[i + 1] >= '0' && s[i + 1] <= '9' && (s[i + 2] == ' ' || s[i + 2] == '\0'))
// 		return (2);
// 	return (0);
// }

// //-9 -> 9 on valid range.
// int RPN::validateInput(char* input) {
// 	if (!isNumber(input, 0))
// 			return (0);	
// 	for (int i = 0; input[i]; i++) {
// 		std::cout << "i: " << i << std::endl;
// 		if (isNumber(input, i) == 1 || isOperator(input, i) == 1) {
// 			i = i + 2;
// 			continue ;
// 		}
// 		else if (isNumber(input, i) == 2) {
// 			i = i + 3;
// 			continue;
// 		}
// 		return (0);
// 	}
// 	return (1);
// }

void RPN::calculate(std::string input) {
	std::string token;
	std::istringstream iss(input);
	int num1, num2, res;
	while (iss >> token) { //tokenizes input based on whitespaces
		if (token == "+" || token == "-" || token == "*" || token == "/") {
			if (numstack.size() < 2)
				std::cerr << "invalid rpn syntax!" << std::endl;
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
                if (num2 == 0) {
                    std::cerr << "please dont divide w zero... :(" << std::endl;
                }
                res = num1 / num2;
            }
			numstack.push(res);
		} else if (std::istringstream(token) >> res) {
			if (res < -9 || res > 9)
				std::cerr << "num too big :(" << std::endl;
			numstack.push(res);
		} else {
			std::cerr << "invalid token :(" << std::endl;
		}
	}

	(void)input;
	return ;
}

const char* RPN::InputException::what() const throw() {
	return ("Input not valid.\0");
}
