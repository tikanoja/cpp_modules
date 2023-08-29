/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:11:39 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/29 15:30:27 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Swap.hpp"
#include "Min.hpp"
#include "Max.hpp"

int main(void) {
	std::cout << "*** SWAP(); ***"<< std::endl;
	int a = 1;
	int b = 2;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl << std::endl;

	std::string c = "this is c";
	std::string d = "this is d";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;

	
	return (0);
}
