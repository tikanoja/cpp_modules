/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:45:04 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/23 21:17:43 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits> //min max int float
#include <cfloat> //constants for floats and epsilon
#include <complex> //complex numbers
//muista ottaa turhat helvettiin

//"make a static class ????"
class ScalarConverter {
	private:
		char scChar;
		int scInt;
		float scFloat;
		double scDouble;

	public:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter& operator=(const ScalarConverter &copy);
		~ScalarConverter(void);
		
		void convert(std::string);
		int inputValidation(std::string);
		void detectType(std::string);
};

#endif
