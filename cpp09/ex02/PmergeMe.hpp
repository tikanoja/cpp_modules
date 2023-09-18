/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:27:27 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/18 13:54:13 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <stdexcept>
#include <sstream>
#include <cctype>
#include <sys/time.h>

class PmergeMe {
	private:
		std::vector<int> vec;
		std::deque<int> deq;
		
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);
		
	public:
		PmergeMe(void);
		~PmergeMe(void);

		void fillContainers(char** input);
		void printVector(int flag);
		void sortContainers();

		class IntegerException : public std::exception {
			public:
				const char* what() const throw();
		};

		class DigitException : public std::exception {
			public:
				const char* what() const throw();
		};
		
		class ConversionException : public std::exception {
			public:
				const char* what() const throw();
		};
		
};

#endif
