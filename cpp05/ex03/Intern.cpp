/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:38:36 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/23 09:46:19 by tuukka           ###   ########.fr       */
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

const char* Intern::noMatchException::what() const throw() {
	return ("The intern was unable to fetch the form you asked for...\0");
}

const char* Intern::shortFormNameException::what() const throw() {
	return ("The intern seems confused about the form, please be patient and provide >7 len form name.\0");
}

const char* Intern::emptyInputException::what() const throw() {
	return ("The intern is visibly nervous... Empty inputs are too much pressure for them!\0");
}

int Intern::argChecker(std::string formName, std::string targetName) {
	try {
		if (formName.empty() || targetName.empty()) {
			throw Intern::emptyInputException();
		}
		else if (formName.length() <= 7) {
			throw Intern::shortFormNameException();
		}
	} catch (std::exception& e) {
		std::cerr << "Caught an error in argChecker(): " << e.what() <<  std::endl;
		return (1);
	}
	return (0);
}

AForm* Intern::makeForm(std::string formName, std::string targetName) {
	if (Intern::argChecker(formName, targetName))
		return (nullptr);

	for (int i = 0; formName[i]; i++) {
		formName[i] = tolower(formName[i]);
	}

	std::string formArr[3] = {"shrubbery creation form", "robotomy request form", "presidential pardon form"};
	AForm* (Intern::*formPtrs[3])(std::string) = {&Intern::makeShrub, &Intern::makeRobo, &Intern::makePres};

	for (int index = 0; index < 3; index++){
		if (formArr[index].find(formName) != std::string::npos)
		{
			std::cout << "Intern creates form " << formArr[index] << "!" << std::endl;
			return ((this->*formPtrs[index])(targetName));
		}
	}
	
	try {
		throw Intern::noMatchException();
	} catch (std::exception& e) {
		std::cerr << "Caught an error in makeForm(): " << e.what() <<  std::endl;
	}
	return (nullptr);
}
