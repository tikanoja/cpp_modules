
#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

//"make a static class ????"
class ScalarConverter {
	private:
		int foo; // ota tää helvettii
	public:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter& operator=(const ScalarConverter &copy);
		~ScalarConverter(void);
};

#endif
