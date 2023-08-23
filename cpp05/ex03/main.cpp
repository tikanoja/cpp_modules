/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:22:03 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/23 09:52:41 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void) {
	Intern smithers;
	std::cout << std::endl;

	Bureaucrat burns("Burns", 1);
	std::cout << std::endl;

	AForm* ptr;
	std::cout << std::endl;

	// ptr = smithers.makeForm("presidential pardon form", "Bart");
	// ptr = smithers.makeForm("omy request", "Bart");
	ptr = smithers.makeForm("CrEaTiOn", "xmas");
	std::cout << std::endl;

	ptr->beSigned(burns);
	std::cout << std::endl;

	ptr->execute(burns);
	std::cout << std::endl;

	delete ptr;
	std::cout << std::endl;
	return 0;
}
