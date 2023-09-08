/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:20:03 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/08 14:24:42 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T> {
	private:
		//declare iterator (possibly inherit from std::iterator)
		
	public:
		MutantStack(void);
		~MutantStack(void);
		MutantStack(MutantStack const& other);
		MutantStack& operator=(MutantStack const& other);

		//functions to return pointers to the bot & top
		//overload ++ and --
		//overload * to dereference the ptr and get the value
};

template <typename T>
MutantStack<T>::MutantStack(void) {
	std::cout << "MutantStack constructor called" << std::endl;
	return ;
}

template <typename T>
MutantStack<T>::~MutantStack(void) {
	std::cout << "MutantStack destructor called" << std::endl;
	return ;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const& other) {
	std::cout << "MutantStack copy constructor called" << std::endl;
	*this = other;
	return ;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack const& other) {
	std::cout << "MutantStack assignment operator called" << std::endl;
	if (this != &other) {
		//copy stuff
	}
	return (*this);
}

#endif
