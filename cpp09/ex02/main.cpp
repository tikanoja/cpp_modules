/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:26:58 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/19 11:12:00 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char** av) {
	if (ac == 1) {
		std::cerr << "usage: " << av[0] << " 3 5 9 7 4" << std::endl << "replace nums w positive ints" << std::endl;
		return (1);
	}
	clock_t start, end;
	double elapsed_ticks;
	double elapsed_us;
	PmergeMe sorter;
	start = clock();
	try {
		sorter.fillContainers(av);
		sorter.printVector(1);
		sorter.printDeque(1);
		sorter.sortContainers();
		end = clock();
		sorter.printVector(2);
		sorter.printDeque(2);
		//print exec times for both
	} catch (std::exception& e) {
		std::cout << "Caught an error: " << e.what() << std::endl; 
	}
	elapsed_ticks = static_cast<double>(end - start);
	elapsed_us = (elapsed_ticks / CLOCKS_PER_SEC);// * 1000000; //bc 1 sec is 1 000 000 us
	

	std::cout << std::fixed << std::setprecision(5) << "mis exec time with vec: " << elapsed_us << std::endl;
	return (0);
}
