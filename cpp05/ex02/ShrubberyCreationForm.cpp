/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:46:07 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/22 14:56:44 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137), target("Default") {
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const newTarget) : AForm("ShrubberyCreationForm", 145, 137), target(newTarget) {
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm("ShrubberyCreationForm", 145, 137), target(copy.target) {
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy) {
	std::cout << "ShrubberyCreationForm copy assignment constructor called" << std::endl;
	if (this != &copy)
		this->target = copy.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
	return ;
}

int ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	if (!AForm::execChecker(executor)) {
		std::ofstream outFile(this->target + "_shrubbery");
		if (outFile.is_open()) {
			outFile << "   ^      ^      ^    " << std::endl;
			outFile << "  /^\\    /^\\    /^\\  " << std::endl;
			outFile << " /^^^\\  /^^^\\  /^^^\\ " << std::endl;
			outFile << "/^^^^^\\/^^^^^\\/^^^^^\\" << std::endl;
			outFile << "   |      |      |    " << std::endl;
			outFile.close();
			std::cout << "Shrubbery creation successful! Check it out at ./" << this->target + "_shrubbery" << std::endl;
			return (0);
		}
		else {
			std::cerr << "Problem growing shrubbery! Please check rights to file." << std::endl;
			return (1);
		}
	}
	else {
		std::cerr << "Failed to grow a beautiful forest!" << std::endl;
		return (1);
	}
	return (0);
}
