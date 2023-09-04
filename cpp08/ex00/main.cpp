/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:03:07 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/04 17:09:34 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array> //std::array
#include <algorithm> //std::fill
#include <iostream>

//you dont have to handle associative containers eg. std::map
//which implies that you DO have to handle standard (sequential) containers!
//eg. std::vector, std::list, std::deque, std::array
int main(void) {
	std::array<int, 1000> intarray;
	// for (std::array<int, 1000>::iterator i = intarray.begin();\
	// 	i != intarray.end();\
	// 	i++) { // 1. declaring iterator and setting to the start of the container 2. terminating contition is the end of the container 3. increment of the iterator, maybe should be ++i
	// 	*i = rand(); //iterator itself is a pointer to the location in the array;
	// }
	int number = 0;
	std::fill(intarray.begin(), intarray.end(), number++);
	for (int i = 0; i < 1000; i++) {
		std::cout << intarray[i] << std::endl;
	}
	// intarray.data(); //returns a raw pointer to the array
	return (0);
}
