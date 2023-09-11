/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:44:40 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/11 20:50:25 by tuukka           ###   ########.fr       */
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
	this->size = 0;
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
		this->container.clear();
		for (unsigned int i = 0; i < other.container.size(); i++)
			this->container.push_back(other.container[i]);
	}
	return (*this);
}

void Span::addNumber(int number){
	if (container.size() < this->size)
		container.push_back(number);
	else
		throw Span::ContainerFullException();
	return ;
}

void Span::addManyNumbers(unsigned int amount, int number) {
	for (unsigned int i = 0; i < amount; i++) {
		if (container.size() < this->size)
			container.push_back(number);
		else
			throw Span::ContainerFullException();
	}
	return ;
}

int Span::shortestSpan() {
	if (this->size == 0 || this->size == 1)
		throw Span::NoSpanException();
	int temp = INT_MAX;
	std::sort(container.begin(), container.end());
	std::vector<int>::iterator it = container.begin();
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
	int min = *std::min_element(container.begin(), container.end());
	int max = *std::max_element(container.begin(), container.end());
	return (max - min);
}
