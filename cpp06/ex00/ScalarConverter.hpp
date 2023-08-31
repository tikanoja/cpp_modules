/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:45:04 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/29 14:06:03 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <complex>

class ScalarConverter {
	private:
		static int scCharFlag; // 0 == okay, 1 == impossible, 2 == non disp.
		static int scIntFlag; // 0 == okay, 1 == impossible
		static int scFloatFlag; // 0 == okay, 1 == impossible
		static int scDoubleFlag; // 0 == okay, 1 == impossible
		static char scChar;
		static int scInt;
		static float scFloat;
		static double scDouble;
		static int scType; //1 == char, 2 == int, 3 == float, 4 == double, 5 == TROUBLE :(

		static int detectType(std::string);
		static void castOthers(void);
		static void printVariables(void);
		static int isChar(std::string);
		static int isInt(std::string);
		static int isFloat(std::string);
		static int isDouble(std::string);
	
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter(void);

	public:
		static int convert(std::string str);
};

#endif
