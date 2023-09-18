/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:26:58 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/18 11:35:58 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char** av) {
	if (ac == 1) {
		std::cerr << "usage: " << av[0] << " 3 5 9 7 4" << std::endl << "replace nums w positive ints" << std::endl;
		return (1);
	}
	try {
		//fill containers
		//print BEFORE
		//sort containers
		//print AFTER
		//print exec times for both
	} catch (std::exception& e) {
		std::cout << "Caught an error: " << e.what() << std::endl; 
	}
	return (0);
}
