/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:52:50 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/29 13:13:37 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base* generate(void) {
	Base* ptr;
	std::srand((std::time(NULL)));
	int index = std::rand() % 3;
	if (index == 0) {
		ptr = new A();
		std::cout << "Generated class A." << std::endl;
	}
	else if (index == 1) {
		ptr = new B();
		std::cout << "Generated class B." << std::endl;
	}
	else {
		ptr = new C();
		std::cout << "Generated class C." << std::endl;
	}
 	return (ptr);
}

void identify(Base* p) {
	A* a_ptr;
	B* b_ptr;
	C* c_ptr;
	if ((a_ptr = dynamic_cast <A*> (p)) != NULL)
		std::cout << "Identified from pointer as A." << std::endl;
	else if ((b_ptr = dynamic_cast <B*> (p)) != NULL)
		std::cout << "Identified from pointer as B." << std::endl;
	else if ((c_ptr = dynamic_cast <C*> (p)) != NULL)
		std::cout << "Identified from pointer as C." << std::endl;
	return ;
}

void identify(Base& p) {
	A a_ref;
	B b_ref;
	C c_ref;

	try {
		a_ref = dynamic_cast <A&> (p);
		std::cout << "Identified from reference as A." << std::endl;
	} catch (std::exception& e) {
		std::cout << "It ain't A!" << std::endl;
	}
	try {
		b_ref = dynamic_cast <B&> (p);
		std::cout << "Identified from reference as B." << std::endl;
	} catch (std::exception& e) {
		std::cout << "It ain't B!" << std::endl;
	}
	try {
		c_ref = dynamic_cast <C&> (p);
		std::cout << "Identified from reference as C." << std::endl;
	} catch (std::exception& e) {
		std::cout << "It ain't C!" << std::endl;
	}
	return ;
}

//dynamic_cast used to convert pointers and references to classes up, down and sideways along the inheritance hierarchy
int main(void) {
	Base *random_class = generate();
	std::cout << std::endl;
	
	identify(random_class);
	std::cout << std::endl;

	identify(*random_class);
	
	delete random_class;
	return (0);
}
