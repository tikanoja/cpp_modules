/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:20:03 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/07 15:52:27 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	private:
	public:
		MutantStack(void);
		~MutantStack(void);
		MutantStack(MutantStack const& other);
		MutantStack& operator=(MutantStack const& other);
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
