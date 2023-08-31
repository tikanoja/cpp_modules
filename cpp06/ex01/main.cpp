/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:48:22 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/31 14:13:41 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

//reinterpret_cast used to cast a pointer of data type into a pointer of another data type
int main(void) {
	Data original;
	Data* deserialized;
	uintptr_t serialized;
	
	original.foo = 105;
	std::cout << original.foo << std::endl;

	std::cout << "Initial address: " << &original << std::endl;

	serialized = Serializer::serialize(&original);
	std::cout << "Serialized address: " << serialized << std::endl;

	deserialized = Serializer::deserialize(serialized);
	std::cout << "Deserialized address: " << deserialized << std::endl;
	
	std::cout << deserialized->foo << std::endl;
	return (0);
}
