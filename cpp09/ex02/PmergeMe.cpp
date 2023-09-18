/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:27:30 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/18 11:33:01 by ttikanoj         ###   ########.fr       */
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



const char* PmergeMe::IntegerException::what() const throw() {
	return ("Input not valid: supported value range 0 -> MAX_INT\0");
}
