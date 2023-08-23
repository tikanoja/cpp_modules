/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:43:55 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/23 21:13:00 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//static_cast <dest_type> (source);
//static_cast <int> (randomFloat);
int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Please provide 1 (one) argument." << std::endl;
		return (1);
	}
	std::string str = av[1];
	ScalarConverter sc;
	sc.convert(str);
	return (0);
}
