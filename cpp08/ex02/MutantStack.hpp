/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:20:03 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/10 23:30:02 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> > { //using deque as base container
	private:
	public:
		MutantStack(void);
		~MutantStack(void);
		MutantStack(MutantStack const& other);
		MutantStack& operator=(MutantStack const& other);

		typedef typename std::deque<T>::iterator iterator;
		// & typedef typename const_it; //luultavasti...

		//functions to return pointers to the bot & top
		iterator begin();
		iterator end();

		//functions to return pointers to the bot & top //CONST
		// stackIterator begin() const;
		// stackIterator end() const;

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
		this->c = other.c;
		//tarviikohan jotain muuta?
		//testaa et toimii!
	}
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void) {
	return (this->c.begin()); // "c" refers to the underlying container member variable used to store data
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void) {
	return (this->c.end());
}

#endif
