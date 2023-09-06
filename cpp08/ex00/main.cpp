/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:03:07 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/06 10:38:48 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

#include <algorithm> //find some nice use for this!!!!!
#include <iostream>
#include <stdexcept>

int main(void) {
	std::cout << "* * * std::vector * * *" << std::endl;
	std::vector<int> intvector; //a dynamic bad boy that can grow in size!
	for (int i = 0; i < 1000; i++) {
		intvector.push_back(i);
	}
	try {
		easyfind(intvector, 42);
	} catch (std::exception& e) {
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}
	try {
		easyfind(intvector, 999);
	} catch (std::exception& e) {
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}
	try {
		easyfind(intvector, 1000);
	} catch (std::exception& e) {
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}
	try {
		easyfind(intvector, -42);
	} catch (std::exception& e) {
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "* * * std::deque * * *" << std::endl;
	std::deque<int> intdeque; //double-ended queue; inser-/deletion from both ends, supports []
	for (int i = 0; i < 1000; i++) {
		if (i % 2 == 0)
			intdeque.push_back(i);
		else
			intdeque.push_front(i);
	}
	try {
		easyfind(intdeque, 42);
	} catch (std::exception& e) {
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}
	try {
		easyfind(intdeque, 999);
	} catch (std::exception& e) {
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}
	try {
		easyfind(intdeque, 1000);
	} catch (std::exception& e) {
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}
	try {
		easyfind(intdeque, -42);
	} catch (std::exception& e) {
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "* * * std::list * * *" << std::endl;
	std::list<int> intlist; //doubly linked list; allows insertion anywhere in the list, no support for [] so neet to traverse the entire list
	for (int i = 0; i < 1000; i++) {
		if (i % 3 == 0)
			intlist.insert(intlist.end(), i);
		else
			intlist.insert(intlist.begin(), i);
	}
	try {
		easyfind(intlist, 42);
	} catch (std::exception& e) {
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}
	try {
		easyfind(intlist, 999);
	} catch (std::exception& e) {
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}
	try {
		easyfind(intlist, 1000);
	} catch (std::exception& e) {
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}
	try {
		easyfind(intlist, -42);
	} catch (std::exception& e) {
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}
	return (0);
}
