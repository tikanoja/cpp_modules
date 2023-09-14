/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:35:34 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/14 15:11:20 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <iostream>
#include <fstream> //handling input files
#include <sstream> //istringstream conversions
#include <iomanip> //printing precision
#include <cctype> //isdigit

class BitcoinExchange {
	private:
		
		BitcoinExchange(BitcoinExchange const& other);
		BitcoinExchange& operator=(BitcoinExchange const& other);
		
	public:
		std::map<std::string, float> database; //move to private when it works...
		BitcoinExchange(void);
		~BitcoinExchange(void);

		void checkArgument(int ac);
		void extractCsv(void);
		void processInput(const char* input);
		int validateDate(std::string date); //valiDate() :-D
		std::map<std::string, float>::iterator findClosestKey(std::string date);
		std::string parseNewKey(int year, int month, int day);

		class FileException : public std::exception {
			public:
				const char* what() const throw();
		};

		class StrToFloatException : public std::exception {
			public:
				const char* what() const throw();
		};

		class FormatException : public std::exception {
			public:
				const char* what() const throw();
		};
};

#endif
