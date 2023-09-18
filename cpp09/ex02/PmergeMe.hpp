/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:27:27 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/18 20:37:55 by tuukka           ###   ########.fr       */
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
		void printTimes(void); //!
		void sortContainers(void);
		
		void mergeInsertionSortVec(std::vector<int>& myVec);
		void insertionSortVec(std::vector<int>& myVec, int vecsize);
		void mergeVec(std::vector<int>& myVec, std::vector<int>& left, std::vector<int>& right);
		
		void mergeInsertionSortDeq(void);
		void insertionSortDeq(void);
		void mergeDeq(void);

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
