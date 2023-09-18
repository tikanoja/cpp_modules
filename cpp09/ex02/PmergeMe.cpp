/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:27:30 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/18 20:52:26 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void){
	std::cout << "PmergeMe constructor called" << std::endl;
	return ;
}

PmergeMe::~PmergeMe(void){
	std::cout << "PmergeMe destructor called" << std::endl;
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

void PmergeMe::fillContainers(char** input) {
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
			deq.push_back(number);
		} else
			throw PmergeMe::ConversionException();
		i++;
	}
	return ;
}

void PmergeMe::printVector(int flag) {
	if (flag == 1)
		std::cout << "Before: ";
	else
		std::cout << "After:  ";
	for (unsigned long i = 0; i < vec.size(); i++) {
		std::cout << " " << vec[i];
	}
	std::cout << std::endl;
	return ;
}

void PmergeMe::mergeVec(std::vector<int>& myVec, std::vector<int>& left, std::vector<int>& right) {
	int i = 0, j = 0, k = 0;
    int leftSize = left.size();
    int rightSize = right.size();

	//merge elems of left & right to vec
	while (i < leftSize && j < rightSize) {
    	if (left[i] < right[j]) {
			myVec[k] = left[i]; //copying the smaller elem from left
			i++;
		} else {
			myVec[k] = right[j]; //copying the smaller elem from right
			j++;
		}
		k++;
	}
	
	//if we have any remaining elems in left, copy to vec
	while (i < leftSize) {
		myVec[k] = left[i];
		i++;
		k++;
	}

	//if we have any remaining elems in left, copy to vec
	while (j < rightSize) {
		myVec[k] = right[j];
		j++;
		k++;
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

void PmergeMe::sortContainers(void) {
	//start clock()
	mergeInsertionSortVec(this->vec);
	//end clock()
	//calculate difference

	//start clock()
	//sort deque
	//end clock()
	//calculate difference
	return ;
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
