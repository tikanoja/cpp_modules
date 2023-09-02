/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:56:37 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/02 08:02:31 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

//MUST USE new[] OPERATOR TO ALLOCATE MEMORY
template <typename T>
class Array {
	private:
		unsigned int arrsize;
		T* arr;

	public:
		Array(void); //creates an empty array
		Array(unsigned int n); //creates an array of n elements *Tip: Try to compile int * a = new int(); then display *a.* initialized my default ???
		~Array(void); //remember to check mem leaks
		Array(Array const& other); //deep copy! modifying the original arr must not affect the copy & vice versa!

		Array& operator=(Array const& other); //deep copy! modifying the original arr must not affect the copy & vice versa!
		T& operator[](unsigned int n); // Elements can be accessed through the subscript operator: [ ]. if out of bounds, throw std::exception
		
		unsigned int size(void) const; //returns the number of elements in the array, MUST NOT MOFIDY THE CURRENT INSTANCE

		class OutOfBoundsException : public std::exception {
			public:
				const char* what() const throw();
		};
};

template <typename T>
Array<T>::Array(void) {
	std::cout << "Array(void) constructor called" << std::endl;
	arrsize = 0;
	arr = new T[0];
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	std::cout << "Array(unsigned int n) constructor called" << std::endl;
	arrsize = n;
	arr = new T[n];
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
	this->arr = NULL; // taa fiksaa ku duunaa uutta tmp toisen perusteella
	*this = other;
	return ;
}

template <typename T>
Array<T>& Array<T>::operator=(Array const& other) {
	std::cout << "Array copy assignment constructor called" << std::endl;
	if (this != &other) {
		arrsize = other.size();
		if (this->arr != NULL)
			delete[] arr; //delete possibly allocated memory before copying the previous memory over!
		arr = new T[arrsize];
		for (unsigned int i = 0; other.arr[i]; i++)
			arr[i] = other.arr[i];
	}
	return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int n) {
	if (n >= this->arrsize || n < 0)
		throw Array<T>::OutOfBoundsException();
	return (this->arr[n]); //addr?? ptr?? raw???!!
}

template <typename T>
unsigned int Array<T>::size(void) const { //onkohan const tarpeen ?
	return (this->arrsize); //onkohan toi this-> tarpeellinen?
}

template <typename T>
const char* Array<T>::OutOfBoundsException::what() const throw() {
	return ("You are trying to access non-allocated memory! :(\0");
}

#endif
