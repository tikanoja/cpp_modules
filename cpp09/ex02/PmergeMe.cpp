/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:27:30 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/18 13:56:25 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void){
	std::cout << "PmergeMe constructor called" << std::endl;
	return ;
}

PmergeMe::~PmergeMe(void){
	std::cout << "PmergeMe destructor called" << std::endl;
	return ;
}

PmergeMe::PmergeMe(const PmergeMe& other){
	*this = other;
	return ;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other){
	if (this != &other) {
		this->vec.clear();
		for (unsigned long i = 0; i < other.vec.size(); i++) {
			this->vec.push_back(other.vec[i]);
		}
		this->deq.clear();
		this->deq = other.deq;
	}
	return (*this);
}

void PmergeMe::fillContainers(char** input) {
	std::string token;
	int number;
	int i = 1;
	while (input[i]) {
		token = input[i];
		for (unsigned long i = 0; i < token.length(); i++) {
			if (!std::isdigit(token[i]))
				throw PmergeMe::DigitException();
		}
		if (std::istringstream(token) >> number) {
			vec.push_back(number);
			deq.push_back(number);
		} else
			throw PmergeMe::ConversionException();
		i++;
	}
	return ;
}

void PmergeMe::printVector(int flag) {
	if (flag == 1)
		std::cout << "Before: ";
	else
		std::cout << "After:  ";
	for (unsigned long i = 0; i < vec.size(); i++) {
		std::cout << " " << vec[i];
	}
	std::cout << std::endl;
	return ;
}

void PmergeMe::sortContainers(void) {
	struct timeval startTime, endTime;
	gettimeofday(&startTime, NULL);
	//sort vector
	gettimeofday(&endTime, NULL);
	//calculate difference

	//do again for deq
	return ;
}

const char* PmergeMe::IntegerException::what() const throw() {
	return ("Input not valid: supported value range 0 -> MAX_INT\0");
}

const char* PmergeMe::DigitException::what() const throw() {
	return ("Input not valid: Just digits please.\0");
}

const char* PmergeMe::ConversionException::what() const throw() {
	return ("Failed coverting token to int.\0");
}
