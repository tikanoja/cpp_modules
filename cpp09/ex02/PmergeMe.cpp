/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:27:30 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/20 09:40:19 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void){
	// std::cout << "PmergeMe constructor called" << std::endl;
	return ;
}

PmergeMe::~PmergeMe(void){
	// std::cout << "PmergeMe destructor called" << std::endl;
	return ;
}

PmergeMe::PmergeMe(const PmergeMe& other){
	*this = other;
	return ;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other){
	if (this != &other) {
		this->vec.clear();
		for (unsigned long i = 0; i < other.vec.size(); i++) {
			this->vec.push_back(other.vec[i]);
		}
		this->deq.clear();
		this->deq = other.deq;
	}
	return (*this);
}

void PmergeMe::fillVec(char** input) {
	std::string token;
	int number;
	int i = 1;
	while (input[i]) {
		token = input[i];
		for (unsigned long i = 0; i < token.length(); i++) {
			if (!std::isdigit(token[i]))
				throw PmergeMe::DigitException();
		}
		if (std::istringstream(token) >> number) {
			vec.push_back(number);
		} else
			throw PmergeMe::ConversionException();
		i++;
	}
	return ;
}

void PmergeMe::fillDeq(char** input) {
	std::string token;
	int number;
	int i = 1;
	while (input[i]) {
		token = input[i];
		for (unsigned long i = 0; i < token.length(); i++) {
			if (!std::isdigit(token[i]))
				throw PmergeMe::DigitException();
		}
		if (std::istringstream(token) >> number) {
			deq.push_back(number);
		} else
			throw PmergeMe::ConversionException();
		i++;
	}
	return ;
}

void PmergeMe::printVector(int flag) {
	if (flag == 1)
		std::cout << "Before (vec): ";
	else if (flag == 2)
		std::cout << "After (vec):  ";
	else if (flag == 3)
		std::cout << "Before:       ";
	for (unsigned long i = 0; i < vec.size(); i++) {
		std::cout << " " << vec[i];
	}
	std::cout << std::endl;
	return ;
}

void PmergeMe::printDeque(int flag) {
	if (flag == 1)
		std::cout << "Before (deq): ";
	else
		std::cout << "After (deq):  ";
	std::deque<int>::iterator it;
	for (it = deq.begin(); it != deq.end(); it++) {
		std::cout << " " << *it;
	}
	std::cout << std::endl;
	return ;
}

void PmergeMe::mergeVec(std::vector<int>& myVec, std::vector<int>& left, std::vector<int>& right) {
	int l = 0, r = 0, v = 0;
    int leftSize = left.size();
    int rightSize = right.size();
	//merge elems of left & right to vec
	while (l < leftSize && r < rightSize) {
    	if (left[l] < right[r]) {
			myVec[v] = left[l]; //copying the smaller elem from left
			l++;
		} else {
			myVec[v] = right[r]; //copying the smaller elem from right
			r++;
		}
		v++;
	}
	//if we have any remaining elems in left, copy to vec
	while (l < leftSize) {
		myVec[v] = left[l];
		l++;
		v++;
	}
	//if we have any remaining elems in left, copy to vec
	while (r < rightSize) {
		myVec[v] = right[r];
		r++;
		v++;
	}
	return ;
}

void PmergeMe::insertionSortVec(std::vector<int>& myVec, int vecsize) {
	for (int i = 1; i < vecsize; i++) {
		int key = myVec[i]; // curr elem to be inserted
		int comp = i - 1; // start comparison from the previous elem

		//move elems that are > key to one pos ahead of their curr pos
		while (comp >= 0 && myVec[comp] > key) {
			myVec[comp + 1] = myVec[comp];
			comp--;
		}

		//insert key to correct pos
		myVec[comp + 1] = key;
	}
	return ;
}

void PmergeMe::mergeInsertionSortVec(std::vector<int>& myVec) {
	int vecsize = myVec.size();
	if (vecsize <= 1)
		return ;
	if (vecsize <= 10) //threshold value for insertion sort
		insertionSortVec(myVec, vecsize);
	else {
		int mid = vecsize / 2; //dividing the vector into two
		std::vector<int> left(myVec.begin(), myVec.begin() + mid); //begin to mid
		std::vector<int> right(myVec.begin() + mid, myVec.end()); //mid to end

		//recursively sort the divided vecs
		mergeInsertionSortVec(left);
		mergeInsertionSortVec(right);

		//merge sorted halves back together
		mergeVec(myVec, left, right);
	}
	return ;
}

void PmergeMe::mergeDeq(std::deque<int>& myDeq, std::deque<int>& left, std::deque<int>& right) {
	int l = 0, r = 0, d = 0;
    int leftSize = left.size();
    int rightSize = right.size();
	//merge elems of left & right to deq
	while (l < leftSize && r < rightSize) {
    	if (left[l] < right[r]) {
			myDeq[d] = left[l]; //copying the smaller elem from left
			l++;
		} else {
			myDeq[d] = right[r]; //copying the smaller elem from right
			r++;
		}
		d++;
	}
	//if we have any remaining elems in left, copy to deq
	while (l < leftSize) {
		myDeq[d] = left[l];
		l++;
		d++;
	}
	//if we have any remaining elems in left, copy to deq
	while (r < rightSize) {
		myDeq[d] = right[r];
		r++;
		d++;
	}
	return ;
}

void PmergeMe::insertionSortDeq(std::deque<int>& myDeq, int deqsize) {
	for (int i = 1; i < deqsize; i++) {
		int key = myDeq[i]; // curr elem to be inserted
		int comp = i - 1; // start comparison from the previous elem

		//move elems that are > key to one pos ahead of their curr pos
		while (comp >= 0 && myDeq[comp] > key) {
			myDeq[comp + 1] = myDeq[comp];
			comp--;
		}

		//insert key to correct pos
		myDeq[comp + 1] = key;
	}
	return ;
}

void PmergeMe::mergeInsertionSortDeq(std::deque<int>& myDeq) {
	int deqsize = myDeq.size();
	if (deqsize <= 1)
		return ;
	if (deqsize <= 10)
		insertionSortDeq(myDeq, deqsize);
	else {
		int mid = deqsize / 2;
		std::deque<int> left, right;
		for (int i = 0; i < mid; i++) {
			left.push_back(myDeq[i]);
		}
		for (int i = mid; i < deqsize; i++) {
			right.push_back(myDeq[i]);
		}
		mergeInsertionSortDeq(left);
		mergeInsertionSortDeq(right);

		mergeDeq(myDeq, left, right);
	}
	return ;
}

void PmergeMe::processVec(char** input) {
	vecStart = clock();
	fillVec(input);
	mergeInsertionSortVec(this->vec);
	vecEnd = clock();
	ticks = static_cast<double>(vecEnd - vecStart);
	vecTime = ticks / CLOCKS_PER_SEC * 1000000;
	return ;
}

void PmergeMe::processDeq(char** input) {
	deqStart = clock();
	fillDeq(input);
	mergeInsertionSortDeq(this->deq);
	deqEnd = clock();
	ticks = static_cast<double>(deqEnd - deqStart);
	deqTime = ticks / CLOCKS_PER_SEC * 1000000;
	return ;
}

void PmergeMe::printTimes(void) {
	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << vecTime << " us" << std::endl;
	std::cout << "Time to process a range of " << deq.size() << " elements with std::deque  : " << deqTime << " us" << std::endl;
}

const char* PmergeMe::IntegerException::what() const throw() {
	return ("Input not valid: supported value range 0 -> MAX_INT\0");
}

const char* PmergeMe::DigitException::what() const throw() {
	return ("Input not valid: Just digits please.\0");
}

const char* PmergeMe::ConversionException::what() const throw() {
	return ("Failed coverting token to int.\0");
}
