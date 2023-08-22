/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:22:03 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/22 14:00:11 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
	Intern smithers;
	std::cout << std::endl;

	Bureaucrat burns("Burns", 1);
	std::cout << std::endl;

	AForm* ptr;
	std::cout << std::endl;

	ptr = smithers.makeForm("presidential pardon form", "Bart");
	// ptr = smithers.makeForm("omy request", "Bart");
	// ptr = smithers.makeForm("CrEaTiOn", "xmas");
	std::cout << std::endl;

	ptr->beSigned(burns);
	std::cout << std::endl;

	ptr->execute(burns);
	std::cout << std::endl;

	delete ptr;
	std::cout << std::endl;
	return 0;
}
