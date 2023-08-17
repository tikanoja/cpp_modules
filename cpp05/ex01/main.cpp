/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:22:03 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/17 17:08:03 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void) {
	Form f("lomake", 105, 3);
	std::cout << f << std::endl;

	Form a(f);
	std::cout << a << std::endl;

	Form b = a;
	std::cout << a << std::endl;
	
	a = b;
	std::cout << a << std::endl;


	return 0;
}
