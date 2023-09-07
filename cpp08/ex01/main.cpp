/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:44:01 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/07 10:42:22 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//muista teha overload ja tsek jos on const span

int main(void) {
	std::cout << "* * * Million calls & then one * * *" << std::endl;
	Span million(1000000);
	for (int i = 0; i < 1000001; i++) {
		try {
			million.addNumber(i);
		} catch (std::exception& e) {
			std::cerr << "Caught an exception: " << e.what() << std::endl;
		}
	}
	
	std::cout << std::endl << "* * * Getting the min & max span * * *" << std::endl;
	Span foo(5);
	try {
		foo.addNumber(42);
		foo.addNumber(1);
		foo.addNumber(666);
		foo.addNumber(43);
		foo.addNumber(1001);
	} catch (std::exception& e) {
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}
	
	std::cout << "Return value of foo.longestSpan(): " << foo.longestSpan() << std::endl;
	std::cout << "Return value of foo.shortestSpan(): " << foo.shortestSpan() << std::endl;

	std::cout << std::endl << "* * * StReSs TeSt * * *" << std::endl;
	return (0);
}

//SUBJECT MAIN
// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }
