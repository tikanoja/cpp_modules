/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:38:36 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/22 12:51:29 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
	std::cout << "Intern constructor called" << std::endl;
	return ;
}

Intern::Intern(const Intern& copy) {
	std::cout << "Intern copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Intern& Intern::operator=(const Intern& copy) {
	std::cout << "Intern copy assignment constructor called" << std::endl;
	(void)copy;
	return (*this);
}

Intern::~Intern(void) {
	std::cout << "Intern destructor called" << std::endl;
	return ;
}

AForm* Intern::makeShrub(std::string targetName) {
	return (new ShrubberyCreationForm(targetName));
}

AForm* Intern::makeRobo(std::string targetName) {
	return (new RobotomyRequestForm(targetName));
}

AForm* Intern::makePres(std::string targetName) {
	return (new PresidentialPardonForm(targetName));
}

AForm* Intern::makeForm(std::string formName, std::string targetName) {
	//tsekkaa params ja throw errors
	if (formName.empty() || targetName.empty()) {
		std::cerr << "The intern is visibly nervous... Empty inputs are too much pressure for them!" << std::endl;
	}
	if (formName.length() <= 7) {
		std::cerr << "The intern seems confused about the form, please be patient and a bit more specific with the form name..." << std::endl;
	}
	for (int i = 0; formName[i]; i++) {
		formName[i] = tolower(formName[i]);
	}

	AForm* ptr = nullptr;
	std::string formArr[3] = {"shrubbery creation form", "robotomy request form", "presidential pardon form"};
	AForm* (Intern::*formPtrs[3])(std::string) = {&Intern::makeShrub, &Intern::makeRobo, &Intern::makePres};

	for (int index = 0; index < 3; index++){
		if (formArr[index].find(formName) != std::string::npos)
		{
			std::cout << "Intern creates form " << formArr[index] << "!" << std::endl;
			return ((this->*formPtrs[index])(targetName));
		}
	}

	std::cerr << "The intern was unable to fetch the form you asked for..." << std::endl;
	return (ptr);
}
