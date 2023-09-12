/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:44:38 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/12 11:44:14 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <stdexcept>
#include <vector>
#include <iostream>
#include <limits>

class Span {
	private:
		unsigned int size;
		std::vector<int> container;

	public:
		Span(void);
		Span(unsigned int N);
		~Span(void);
		Span(Span const& other);
		Span& operator=(Span const& other);

		void addNumber(int number);
		void addManyNumbers(unsigned int amount, int number);
		int shortestSpan();
		int longestSpan();
		
		class NoSpanException : public std::exception {
			public:
				const char* what() const throw();
		};
		
		class ContainerFullException : public std::exception {
			public:
				const char* what() const throw();
		};
};

#endif
