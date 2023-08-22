/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:54:22 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/22 13:16:46 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

int AForm::assignGrade(int grade) {
	try {
		if (grade >= 1 && grade <= 150)
			return (grade);
		else if (grade < 1)
			throw AForm::GradeTooHighException();
		throw AForm::GradeTooLowException();
	} catch (std::exception& e) {
		std::cout << "Caught an error in form constructor: " << e.what() << std::endl;
		if (grade < 1) {
			std::cout << "Substituting grade " << grade << " with 1." << std::endl;
			return (1);
		}
		std::cout << "Substituting grade " << grade << " with 150." << std::endl;
		return (150);
	}
}

AForm::AForm(std::string const newName, int const newSignGrade, int const newExecGrade) \
	: name(newName), signGrade(AForm::assignGrade(newSignGrade)), execGrade(AForm::assignGrade(newExecGrade)), signature(0) {
	std::cout << "Form constructor called" << std::endl;
	return ;
}

AForm::AForm(const AForm &copy) \
	: name(copy.name), signGrade(copy.signGrade), execGrade(copy.execGrade), signature(copy.signature) {
	std::cout << "Form copy constructor called" << std::endl;
	*this = copy;
	return ;
}

AForm& AForm::operator=(const AForm &copy) {
	std::cout << "Form copy assignment constructor called" << std::endl;
	if (this != &copy){
		this->signature = copy.signature;
	}
	return (*this);
}

AForm::~AForm(void) {
	std::cout << "Form destructor called" << std::endl;
	return ;
}

const char* AForm::GradeTooHighException::what() const throw() {
	return ("Grade too high!\0");
}

const char* AForm::GradeTooLowException::what() const throw() {
	return ("Grade too low!\0");
}

const char* AForm::MissingSignature::what() const throw() {
	return ("Missing signature!\0");
}

std::string AForm::getName(void) const {
	return (this->name);
}

int AForm::getSignGrade() const {
	return (this->signGrade);
}

int AForm::getExecGrade() const {
	return (this->execGrade);
}

bool AForm::getSignature() const {
	return (this->signature);
}

void AForm::setSignature(int i) {
	this->signature = i;
}

void AForm::beSigned(Bureaucrat& b) {
	try {
		if (b.getGrade() <= this->getSignGrade()) {
			this->signature = 1;
			std::cout << this->getName() << " got signed by " << b.getName() << "!" << std::endl;
		}
		else
			throw AForm::GradeTooLowException();
	} catch (std::exception& e) {
		std::cout << "Caught an error in beSigned(): " << e.what() << std::endl;
	}
	return ;
}

int AForm::execChecker(Bureaucrat const& executor) const {
	try {
		if (this->getSignature() == 0)
			throw AForm::MissingSignature();
		else if (executor.getGrade() > this->getExecGrade() || executor.getGrade() > this->getSignGrade())
			throw AForm::GradeTooLowException();
		return (0);
	} catch (std::exception& e) {
		std::cout << "Caught an error in execChecker(): " << e.what() << std::endl;
		return (1);
	}
}

std::ostream& operator<<(std::ostream &output, const AForm &f) {
	output << "form name: " << f.getName() << ", sign grade: " << f.getSignGrade() << ", exec grade: " << f.getExecGrade() << ", signature: " << f.getSignature();
	return (output);
}
