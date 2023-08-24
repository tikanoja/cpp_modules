/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:45:04 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/24 12:06:43 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream> //converting std::string to an int via std::istrigstream
#include <limits> //min max int float
#include <cfloat> //constants for floats and epsilon
#include <complex> //complex numbers
//muista ottaa turhat helvettiin

//"make a static class ????"
class ScalarConverter {
	private:
		static char scChar;
		static int scInt;
		static float scFloat;
		static double scDouble;

		// int inputValidation(std::string);

		static std::string detectType(std::string);
		
		static int isChar(std::string);
		static int isInt(std::string);
		static int isFloat(std::string);
		static int isDouble(std::string);

	public:
		//const- / destructors not needed in static class?
		// ScalarConverter(void);
		// ScalarConverter(const ScalarConverter &copy);
		// ScalarConverter& operator=(const ScalarConverter &copy);
		// ~ScalarConverter(void);
		
		static void convert(std::string);
};

#endif
