/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:23:12 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/12 10:59:36 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main(void) {
	MutantStack<int> mstack;
	std::cout << std::endl << "* * * Filling in 1-11 to the stack via push() * * *" << std::endl;
	for (int i = 1; i <= 11; i++) {
		mstack.push(i);
		std::cout << "Pushed " << i << " to the stack" << std::endl;
	}

	std::cout << std::endl << "* * * top() & pop() * * *" << std::endl;
	std::cout << "On the top() of the stack: " << mstack.top() << std::endl;
	std::cout << "Removing topmost elem via pop()" << std::endl;
	mstack.pop();
	std::cout << "On the top() of the stack: " << mstack.top() << std::endl;
	
	std::cout << std::endl << "* * * Iterating forward in the stack * * *" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator end = mstack.end();
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
	MutantStack<int> const conststack(mstack);
	MutantStack<int>::const_iterator const constit = conststack.begin();
	std::cout << "First element of the new stack: " << *constit << std::endl;

	std::cout << std::endl << "* * * Copy & assignment * * *" << std::endl;
	std::cout << "Address of the first container: " << mstack.getContainerAddress() << std::endl;
	std::cout << "Address of the second container: " << conststack.getContainerAddress() << std::endl << std::endl;

	std::cout << "* * * Destructor prints * * *" << std::endl;
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

// SUBJECT MAIN pt2
// int main()
// {
// 	std::list<int> myList;
// 	myList.push_back(5);
// 	myList.push_back(17);
// 	std::cout << myList.back() << std::endl;
// 	myList.pop_back();
// 	std::cout << myList.size() << std::endl;
// 	myList.push_back(3);
// 	myList.push_back(5);
// 	myList.push_back(737);
// 	//[...]
// 	myList.push_back(0);
// 	std::list<int>::iterator it = myList.begin();
// 	std::list<int>::iterator ite = myList.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// 	return 0;
// }
