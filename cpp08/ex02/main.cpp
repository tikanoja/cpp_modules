/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:23:12 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/11 12:26:25 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

//std::stack is a wrapper for deque!

int main(void) {
	MutantStack<int> mstack;
	std::cout << std::endl << "* * * Filling in 0-11 to the stack via push() * * *" << std::endl;
	for (int i = 0; i <= 11; i++) {
		mstack.push(i);
		std::cout << "Pushed " << i << " to the stack" << std::endl;
	}

	std::cout << std::endl << "* * * top() & pop() * * *" << std::endl;
	std::cout << "On the top() of the stack: " << mstack.top() << std::endl;
	std::cout << "Removing topmost elem via pop()" << std::endl;
	mstack.pop();
	std::cout << "On the top() of the stack: " << mstack.top() << std::endl;
	
	std::cout << std::endl << "* * * Iterating forward in the stack * * *" << std::endl;
	MutantStack<int>::iterator it = mstack.begin(); //points to the first element
	MutantStack<int>::iterator end = mstack.end(); // points ONE PAST the last element
	while (it != end) {
		std::cout << *it << std::endl;
		it++;
	}
	
	it--;
	std::cout << std::endl << "* * * Iterating backwards in the stack * * *" << std::endl;
	end = mstack.begin();
	end--;
	while (it != end) {
		std::cout << *it << std::endl;
		it--;
	}
	
	std::cout << std::endl << "* * * Handling const * * *" << std::endl;
	//show that the class works with const container

	std::cout << std::endl << "* * * Copy & assignment * * *" << std::endl;
	//show that we have a deep copy

	return (0);
}

// SUBJECT MAIN
// int main()
// {
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// }
