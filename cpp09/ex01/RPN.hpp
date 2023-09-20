/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:24:32 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/20 11:42:57 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <stack>
#include <string>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <list>

class RPN {
	private:
		std::stack<float, std::list<float> > numstack;
		RPN(RPN const& other);
		RPN& operator=(RPN const& other);
		
		class SyntaxException : public std::exception {
			public:
				const char* what() const throw();
		};
		class DivisionException : public std::exception {
			public:
				const char* what() const throw();
		};
		class OperandException : public std::exception {
			public:
				const char* what() const throw();
		};
		class TokenException : public std::exception {
			public:
				const char* what() const throw();
		};
		
	public:
		RPN(void);
		~RPN(void);
		
		void calculate(std::string input);
};

# endif
