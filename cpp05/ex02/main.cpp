/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:22:03 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/22 15:14:32 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
	std::cout << "***** Bureaucrat with negative grade *****" << std::endl;
	Bureaucrat johnson("Johnson", -10);
	std::cout << johnson << std::endl;
	std::cout << std::endl;

	std::cout << "***** Bureaucrat with >150 grade *****" << std::endl;
	Bureaucrat jeremy("Jeremy", 150000);
	std::cout << jeremy << std::endl;
	std::cout << std::endl;

	std::cout << "***** Bureaucrat with normal grade 10 *****" << std::endl;
	Bureaucrat sophie("Sophie", 10);
	std::cout << sophie << std::endl;
	std::cout << std::endl;

	std::cout << "***** Bureaucrat with normal grade 46 *****" << std::endl;
	Bureaucrat mark("Mark", 46);
	std::cout << mark << std::endl;
	std::cout << std::endl;

	std::cout << "***** Using bureaucrat functions on shrubbery *****" << std::endl;
	ShrubberyCreationForm shrub("forest");
	std::cout << shrub << std::endl;
	jeremy.signForm(shrub);
	std::cout << shrub << std::endl;
	johnson.executeForm(shrub);
	mark.signForm(shrub);
	std::cout << shrub << std::endl;
	johnson.executeForm(shrub);
	std::cout << std::endl;

	std::cout << "***** Using form functions on robotomy *****" << std::endl;
	RobotomyRequestForm robo("Jeff");
	std::cout << robo << std::endl;
	robo.beSigned(jeremy);
	robo.execute(sophie);
	robo.beSigned(sophie);
	std::cout << robo << std::endl;
	robo.execute(sophie);
	std::cout << std::endl;
	
	std::cout << "***** Presidential *****" << std::endl;
	PresidentialPardonForm ppf("Super Hans");
	std::cout << ppf << std::endl;
	johnson.signForm(ppf);
	johnson.executeForm(ppf);
	std::cout << std::endl;
	
	std::cout << "***** Bureaucrat copying *****" << std::endl;
	Bureaucrat doppelganger(mark);
	std::cout << doppelganger << std::endl;
	doppelganger = johnson;
	std::cout << doppelganger << std::endl;
	std::cout << std::endl;
	
	std::cout << "***** Form copying *****" << std::endl;
	PresidentialPardonForm duplicate(ppf);
	std::cout << duplicate << std::endl;
	duplicate = ppf;
	PresidentialPardonForm another_one = duplicate;
	std::cout << another_one << std::endl;
	std::cout << std::endl;
	
	// AForm abstract("no can do");
	return 0;
}
