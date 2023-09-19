/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:27:27 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/19 11:11:15 by ttikanoj         ###   ########.fr       */
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
#include <ctime>
#include <iomanip> //for specifying precision

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
		void printDeque(int flag);
		void printTimes(void); //!
		void sortContainers(void);
		
		void mergeVec(std::vector<int>& myVec, std::vector<int>& left, std::vector<int>& right);
		void insertionSortVec(std::vector<int>& myVec, int vecsize);
		void mergeInsertionSortVec(std::vector<int>& myVec);
		
		void mergeDeq(std::deque<int>& myDeq, std::deque<int>& left, std::deque<int>& right);
		void insertionSortDeq(std::deque<int>& myDeq, int deqsize);
		void mergeInsertionSortDeq(std::deque<int>& myDeq);

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
