/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mymain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:19:10 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/04 15:32:55 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main (void) {
	std::cout << "* * * Construction w no param & trying to access empty mem * * *" << std::endl;
	Array<int> noparam;
	std::cout << "Size of the arr: " << noparam.size() << std::endl;
	try {
	noparam[0] = 1;
	} catch (std::exception& e) {
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}
	try {
	std::cout << noparam[-15] << std::endl;
	} catch (std::exception& e) {
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "* * * Another type of array (char) * * *" << std::endl;
	Array<char> char_arr(10);
	for (int i = 0; i < 10; i++) {
		char_arr[i] = i + 65;
	}
	for (int i = 0; i < 10; i++) {
		std::cout << char_arr[i] << std::endl;
	}
	try {
		std::cout << char_arr[10] << std::endl;
	} catch (std::exception& e) {
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "* * * Showcasing init to default  * * *" << std::endl;
	Array<int> int_arr(1);
	std::cout << "Int_arr[0] = " << int_arr[0] << std::endl;
	Array<std::string> string_arr(1);
	std::cout << "String_arr[0] = " << string_arr[0] << std::endl;
	std::cout << "Standard behaviour with int* a = new int();" << std::endl;
	int* a = new int();
	std::cout << "a = " << *a << std::endl;
	std::cout << "Standard behaviour with std::string* b = new std::string();" << std::endl;
	std::string* b = new std::string();
	std::cout << "b = " << *b << std::endl;
	delete a;
	delete b;

	std::cout << std::endl << "* * * Copy, assignment & deep/shallow test * * *" << std::endl;
	Array<float> float_arr(5);
	float_arr[0] = 0.1f;
	float_arr[1] = 1.2f;
	float_arr[2] = 2.3f;
	float_arr[3] = 3.4f;
	float_arr[4] = 4.5f;
	Array<float> another_float_arr(float_arr);
	Array<float> yet_another_float_arr = another_float_arr;
	std::cout << "Addesses of the float arrays:" << std::endl;
	std::cout << "1. :" << &float_arr << std::endl;
	std::cout << "2. :" << &another_float_arr <<  std::endl;
	std::cout << "3. :" << &yet_another_float_arr << std::endl;
	float_arr[0] = 105.105f;
	std::cout << "Arr 1 index 0: " << float_arr[0] << std::endl;
	std::cout << "Arr 2 index 0: " << another_float_arr[0] << std::endl;
	std::cout << "Arr 3 index 0: " << yet_another_float_arr[0] << std::endl;

	std::cout << std::endl << "Okay thats it! Thank you for your patience. Going out of scope now so have a good one & enjoy the destructor prints!" << std::endl;
	return (0);
}
