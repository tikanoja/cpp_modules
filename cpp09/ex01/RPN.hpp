/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:24:32 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/17 19:39:56 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <stack>
#include <string>
#include <iostream>
#include <sstream>


class RPN {
	private:
		std::stack<int> numstack;
		
	public:
		RPN(RPN const& other);
		RPN& operator=(RPN const& other);
		RPN(void);
		~RPN(void);

		// int isOperator(char *s, int i);
		// int isNumber(char* s, int i); //koska jos - ni pitää pystyy tsek seuraava
		// int validateInput(char* input);
		void calculate(std::string input);
		class InputException : public std::exception {
			public:
				const char* what() const throw();
		};
};

# endif
