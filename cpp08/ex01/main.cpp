/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:44:01 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/11 20:50:42 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {
	std::cout << "* * * Million & then one * * *" << std::endl;
	Span million(1000000);
	try {
		million.addManyNumbers(1000001, 42);
	} catch (std::exception& e) {
			std::cerr << "Caught an exception: " << e.what() << std::endl;
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

	std::cout << std::endl << "* * * Copying * * *" << std::endl;
	Span bar(6);
	try {
		bar.addNumber(1);
		bar.addNumber(3);
		bar.addNumber(6);
		bar.addNumber(10);
		bar.addNumber(100);
		bar.addNumber(1000000);
	} catch (std::exception& e) {
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}

	std::cout << "Return value of bar.longestSpan(): " << bar.longestSpan() << std::endl;
	std::cout << "Return value of bar.shortestSpan(): " << bar.shortestSpan() << std::endl;
	
	bar = foo;
	
	std::cout << "Return value of bar.longestSpan(): " << bar.longestSpan() << std::endl;
	std::cout << "Return value of bar.shortestSpan(): " << bar.shortestSpan() << std::endl << std::endl;
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
