/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:41:17 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/31 14:04:35 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <iostream>

void plusone(int &i) {
	i++;
	return ;
}

void printer(std::string str) {
	std::cout << str << std::endl;
	return ;
}

int main(void) {
	// int foo[] = {0, 1, 2, 3, 4};
	char bar[] = {'a', 'b', 'c', 'd', 'e'};
	// std::string stringsss[] = {"bart", "lisa", "maggie", "marge", "homer"};
	
	iter(bar, 5, &printer);

	return (0);
}
