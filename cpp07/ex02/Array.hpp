/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:56:37 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/01 11:16:30 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

//MUST USE new[] OPERATOR TO ALLOCATE MEMORY
template <class T>
class Array {
	private:
	public:
		Array(); //creates an empty array
		Array(unsigned int n); //creates an array of n elements *Tip: Try to compile int * a = new int(); then display *a.*
		~Array(); //remember to check mem leaks
		Array(Array const& other); //deep copy! modifying the original arr must not affect the copy & vice versa!
		Array& operator=(Array const& other); //deep copy! modifying the original arr must not affect the copy & vice versa!
		Array& operator[](unsigned int n); // Elements can be accessed through the subscript operator: [ ]. if out of bounds, throw std::exception
		unsigned int size(void) const; //returns the number of elements in the array, MUST NOT MOFIDY THE CURRENT INSTANCE
};

#endif
