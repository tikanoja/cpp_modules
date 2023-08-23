
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {
	std::cout << "ScalarConverter constructor called" << std::endl;
	return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	*this = copy;
	return ;
}

//muista täyttää tähä oikeet valuet jos tulee jotaa private members
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &copy) {
	std::cout << "ScalarConverter copy assignment constructor called" << std::endl;
	if (this != &copy)
		this->foo = copy.foo;
	return (*this);
}

ScalarConverter::~ScalarConverter(void) {
	std::cout << "ScalarConverter destructor called" << std::endl;
	return ;
}