/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:56:37 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/01 12:29:10 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

//MUST USE new[] OPERATOR TO ALLOCATE MEMORY
template <typename T>
class Array {
	private:
		unsigned int size;
		T* arr;

	public:
		Array(); //creates an empty array
		Array(unsigned int n); //creates an array of n elements *Tip: Try to compile int * a = new int(); then display *a.* initialized my default ???
		~Array(); //remember to check mem leaks
		Array(Array const& other); //deep copy! modifying the original arr must not affect the copy & vice versa!

		Array& operator=(Array const& other); //deep copy! modifying the original arr must not affect the copy & vice versa!
		Array& operator[](unsigned int n); // Elements can be accessed through the subscript operator: [ ]. if out of bounds, throw std::exception
		
		unsigned int size(void) const; //returns the number of elements in the array, MUST NOT MOFIDY THE CURRENT INSTANCE

		class OutOfBounds : public std::exception {
			public:
				const char* what() const throw();
		};
};

template <typename T>
const char* Array<T>::OutOfBounds::what() const throw() {
	return ("You are trying to access non-allocated memory! :(\0");
}

template <typename T>
unsigned int Array<T>::size(void) const { //onkohan const tarpeen ?
	return (this->size); //onkohan toi this-> tarpeellinen?
}

#endif
