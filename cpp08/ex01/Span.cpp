/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:44:40 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/06 12:47:44 by ttikanoj         ###   ########.fr       */
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
	std::cout << "Span constructor called" << std::endl;
	return ;
}

Span::Span(unsigned int N) {
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

unsigned int shortestSpan() {
	//kokeile loytyyko span
	//jos ei throw excep.
	return (0);
}
unsigned int longestSpan() {
	//kokeile loytyyko span
	//jos ei throw excep.
	return (0);
}
