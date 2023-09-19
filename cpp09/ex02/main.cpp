/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:26:58 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/19 13:03:51 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char** av) {
	if (ac == 1) {
		std::cout << "usage: " << av[0] << " 3 5 9 7 4" << std::endl << "replace nums w positive ints" << std::endl;
		return (1);
	}
	PmergeMe inputCheck;
	try {
		inputCheck.fillVec(av);
		inputCheck.printVector(3);
	} catch (std::exception& e) {
		std::cout << "Caught an error: " << e.what() << std::endl;
		return (1);
	}
	PmergeMe sorter;
	try {
		sorter.processVec(av);
		sorter.processDeq(av);
	} catch (std::exception& e) {
		std::cout << "Caught an error: " << e.what() << std::endl; 
	}
	sorter.printVector(2);
	sorter.printDeque(2);
	sorter.printTimes();
	return (0);
}
