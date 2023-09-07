/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:44:40 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/07 10:19:35 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char* Span::NoSpanException::what() const throw() {
	return ("No span found!\0");
}

const char* Span::ContainerFullException::what() const throw() {
	return ("The container is full!\0");
}

Span::Span(void) {
	std::cout << "Span constructor called (void input)" << std::endl;
	return ;
}

Span::Span(unsigned int N) {
	std::cout << "Span constructor called" << std::endl;
	this->size = N;
	return ;
}

Span::~Span(void) {
	std::cout << "Span destructor called" << std::endl;
	return ;
}

Span::Span(Span const& other) {
	std::cout << "Span copy constructor called" << std::endl;
	*this = other;
	return ;
}

Span& Span::operator=(Span const& other) {
	std::cout << "Span copy assignment operator called" << std::endl;
	if (this != &other) {
		this->size = other.size;
		// and copy container !!!!!
	}
	return (*this);
}

void Span::addNumber(int number){
	if (container.size() < this->size) //muista tsekkaa onko < vai <=
		container.push_back(number);
	else
		throw Span::ContainerFullException();
	return ;
}

void Span::addManyNumbers(unsigned int amount, int number)  {
	(void)amount;
	(void)number;
	return ;
}

int Span::shortestSpan() {
	if (this->size == 0 || this->size == 1)
		throw Span::NoSpanException();
	int temp = 2147483647; //init to max range
	std::sort(container.begin(), container.end()); //sorting into ascending order TAA KAYTTAA <algorithm> :)
	std::vector<int>::iterator it = container.begin(); //setting the iterator to be in the beginning of the container
	while (it != container.end() - 1) {
		if (*(it + 1) - *it < temp)
			temp = *(it + 1) - *it;
		it++;
	}
	return (temp);
}

int Span::longestSpan() {
	if (this->size == 0 || this->size == 1)
		throw Span::NoSpanException();
	int min = *std::min_element(container.begin(), container.end()); //returns iterator so dereferencing pointer gives us the actual value pointed to ?
	int max = *std::max_element(container.begin(), container.end()); //min&max_element kayttaa <algorithm> :)
	return (max - min);
}
