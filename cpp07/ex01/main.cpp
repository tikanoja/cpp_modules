/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:41:17 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/31 17:29:58 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <iostream>

void plusone(int &i) {
	i++;
	return ;
}

int main(void) {
	int foo[] = {0, 1, 2, 3, 4};
	char bar[] = {'a', 'b', 'c', 'd', 'e'};
	std::string strs[] = {"bart", "lisa", "maggie", "marge", "homer"};
	std::cout << "calling printer() on int array foo[]" << std::endl;
	iter(foo, 5, printer);
	std::cout << "calling plusone() on int array foo[]" << std::endl;
	iter(foo, 5, plusone);
	std::cout << "calling printer() on int array foo[]" << std::endl;
	iter(foo, 5, printer);
	std::cout << "calling printer() on char array bar[]" << std::endl;
	iter(bar, 5, printer);
	std::cout << "calling plusone() on char array foo[]" << std::endl;
	iter(bar, 5, plusone);
	std::cout << "calling printer() on char array bar[]" << std::endl;
	iter(bar, 5, printer);
	std::cout << "calling printer() on string array strs[]" << std::endl;
	iter(strs, 5, printer);

	return (0);
}
