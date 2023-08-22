/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:38:36 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/22 10:38:40 by ttikanoj         ###   ########.fr       */
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

AForm* Intern::makeForm(std::string formName, std::string targetName) {
	//tsekkaa params
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
	AForm (*formPtrs[3]) = {&ShrubberyCreationForm(targetName), &RobotomyRequestForm(targetName), &PresidentialPardonForm(targetName)};

	for (int index = 0; index < 3; index++){
		if (formArr[index].find(formName) != std::string::npos)
		{
			std::cout << "Intern creates form " << formArr[index] << "!" << std::endl;
			//tas kohtaa on loytyny oikee index ja tee form ja palauta ptr siihe
			// return (new ((*formPtrs[index])()));
			AForm object = new (*formPtrs[index]());
		}
	}

	std::cerr << "The intern was unable to fetch the form you asked for..." << std::endl;
	return (ptr);
}
