/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:56:37 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/05 13:33:53 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	private:
		unsigned int arrsize;
		T* arr;

	public:
		Array(void);
		Array(unsigned int n);
		~Array(void);
		Array(Array const& other);

		Array& operator=(Array const& other);
		T const & operator[](unsigned int n) const; //muista tsekkaa taa!
		T& operator[](unsigned int n);
		
		unsigned int size(void) const;

		class OutOfBoundsException : public std::exception {
			public:
				const char* what() const throw();
		};
};

template <typename T>
Array<T>::Array(void) {
	std::cout << "Array(void) constructor called" << std::endl;
	this->arrsize = 0;
	this->arr = NULL;
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	std::cout << "Array(unsigned int n) constructor called" << std::endl;
	this->arrsize = n;
	this->arr = new T[n];
	return ;
}

template <typename T>
Array<T>::~Array(void) {
	std::cout << "Array destructor called" << std::endl;
	if (this->arr)
		delete[] this->arr;
	return ;
}

template <typename T>
Array<T>::Array(Array const& other) {
	std::cout << "Array copy constructor called" << std::endl;
	this->arr = NULL;
	*this = other;
	return ;
}

template <typename T>
Array<T>& Array<T>::operator=(Array const& other) {
	std::cout << "Array copy assignment constructor called" << std::endl;
	if (this != &other) {
		this->arrsize = other.size();
		if (this->arr != NULL)
			delete[] arr;
		this->arr = new T[arrsize];
		for (unsigned int i = 0; i < other.size(); i++)
			this->arr[i] = other.arr[i];
	}
	return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int n) {
	if (n >= this->arrsize || n < 0)
		throw Array<T>::OutOfBoundsException();
	return (this->arr[n]);
}

template <typename T>
T const & Array<T>::operator[](unsigned int n) const{ //muista tsekkaa taa!
	if (n >= this->arrsize || n < 0)
		throw Array<T>::OutOfBoundsException();
	return (this->arr[n]);
}

template <typename T>
unsigned int Array<T>::size(void) const {
	return (this->arrsize);
}

template <typename T>
const char* Array<T>::OutOfBoundsException::what() const throw() {
	return ("You are trying to access non-allocated memory! :(\0");
}

#endif
