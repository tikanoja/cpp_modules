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
	AForm* ptr = NULL;
	std::string shrub = "shrubbery creation form";
	std::string robo = "robotomy request form";
	std::string pres = "presidential pardon form";

	if (formName.length() <= 7) {
		std::cout << "The intern seems confused about the form, please be patient and a bit more specific with the form name..." << std::endl;
	}
	else if (targetName.length() < 1) {

	}

	for (int i = 0; formName[i]; i++) {
		formName[i] = tolower(formName[i]);
	}

	if (shrub.find(formName) != std::string::npos)
		std::cout << "shrub" << std::endl;
	else if (robo.find(formName) != std::string::npos)
		std::cout << "robo" << std::endl;
	else if (pres.find(formName) != std::string::npos)
		std::cout << "pres" << std::endl;

	(void)targetName;
	return (ptr);
}
