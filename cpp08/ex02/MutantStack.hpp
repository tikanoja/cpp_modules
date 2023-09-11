/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:20:03 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/11 15:28:29 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> > {
	private:
	public:
		MutantStack(void);
		~MutantStack(void);
		MutantStack(MutantStack const& other);
		MutantStack& operator=(MutantStack const& other);

		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;

		iterator begin(void);
		iterator end(void);

		const_iterator begin(void) const;
		const_iterator end(void) const;

		std::deque<T>* getContainerAddress(void);
		const std::deque<T>* getContainerAddress(void) const;
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
	if (this != &other)
		std::stack<T, std::deque<T> >::operator=(other);
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void) {
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void) {
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin(void) const {
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end(void) const {
	return (this->c.end());
}

template <typename T>
std::deque<T>* MutantStack<T>::getContainerAddress(void) {
	return (&this->c);
}

template <typename T>
const std::deque<T>* MutantStack<T>::getContainerAddress(void) const {
	return &(this->c);
}

#endif
