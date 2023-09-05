/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:03:07 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/05 09:40:22 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array> //std::array
#include <vector>
#include <algorithm> //std::fill
#include <iostream>

//you dont have to handle associative containers eg. std::map
//which implies that you DO have to handle standard (sequential) containers!
//eg. std::vector, std::list, std::deque, std::array

int main(void) {
	std::array<int, 1000> intarray;
	int num = 0;
	for (std::array<int, 1000>::iterator i = intarray.begin();\
		i != intarray.end();\
		i++) { // 1. declaring iterator and setting to the start of the container 2. terminating contition is the end of the container 3. increment of the iterator, maybe should be ++i
		*i = num; //iterator itself is a pointer to the location in the array;
		num++;
	}
	easyfind(intarray, 42);
	easyfind(intarray, 999);
	easyfind(intarray, 1000);

	std::vector<int> intvector;
	intvector.push_back(105);
	intvector.push_back(666);
	intvector.push_back(404);
	intvector.push_back(42);
	intvector.push_back(1337);
	easyfind(intarray, 42);
	easyfind(intarray, -1);
	easyfind(intarray, 1338);

	return (0);
}

	// bretty cool!
	// std::fill(intarray.begin(), intarray.end(), number++);
	// intarray.data(); //returns a raw pointer to the array
