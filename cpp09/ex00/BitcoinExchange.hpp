/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:35:34 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/20 11:25:16 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cctype>

class BitcoinExchange {
	private:
		std::map<std::string, float> database;
		
		BitcoinExchange(BitcoinExchange const& other);
		BitcoinExchange& operator=(BitcoinExchange const& other);
		
		int validateDate(std::string date);
		void clearUtilVars(std::string& line, std::string& date, std::string& value_str);
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
		
	public:
		BitcoinExchange(void);
		~BitcoinExchange(void);

		void checkArgument(int ac);
		void extractCsv(void);
		void processInput(const char* input);
};

#endif
