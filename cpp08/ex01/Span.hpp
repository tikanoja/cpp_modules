/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:44:38 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/06 12:29:45 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <stdexcept>
#include <vector>
#include <iostream>

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
		unsigned int shortestSpan();
		unsigned int longestSpan();
		
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
