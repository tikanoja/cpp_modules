/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:35:34 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/13 14:47:42 by ttikanoj         ###   ########.fr       */
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

		class FileException : public std::exception {
			public:
				const char* what() const throw();
		};

		class StringstreamException : public std::exception {
			public:
				const char* what() const throw();
		};
};

#endif
