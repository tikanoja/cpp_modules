/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:24:32 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/15 16:25:40 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <stack>
#include <string>
#include <iostream>


class RPN {
	private:
		std::stack<int> numbers;
		
	public:
		RPN(RPN const& other);
		RPN& operator=(RPN const& other);
		RPN(void);
		~RPN(void);

		int isOperator(char c);
		int isNumber(char* c); //koska jos - ni pitää pystyy tsek seuraava
		int validateInput(char* input);
		void calculate(std::string input);
		class InputException : public std::exception {
			public:
				const char* what() const throw();
		};
};

# endif
