/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:22:23 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/18 14:16:54 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const newName, int newGrade) : name(newName) {
	std::cout << "Bureaucrat constructor called for officer " << newName << ", grade " << newGrade << std::endl;
	try {
		if (newGrade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (newGrade > 150)
			throw Bureaucrat::GradeTooLowException();
		this->grade = newGrade;
	} catch (std::exception& e) {
		std::cout << "Caught an error in Bureaucrat constructor: " << e.what() << std::endl;
		std::cout << "Substituting grade " << newGrade << " with the closest value in range: ";
		if (newGrade < 1) {
			std::cout << "1." << std::endl;
			this->grade = 1;
		} else {
			std::cout << "150." << std::endl;
			this->grade = 150;
		}
	}
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.getName()) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy) {
	std::cout << "Bureaucrat copy assignment constructor called" << std::endl;
	if (this != &copy){
		this->grade = copy.getGrade();
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat destructor called" << std::endl;
	return ;
}

std::string Bureaucrat::getName(void) const {
	return (this->name);
}

int Bureaucrat::getGrade(void) const {
	return (this->grade);
}

void Bureaucrat::increaseGrade(void) {
	try {
		if (this->grade > 1) {
			this->grade--;
			std::cout << this->getName() << " has been promoted to grade " << this->getGrade() << "!" << std::endl;
		}
		else
			throw Bureaucrat::GradeTooHighException();
	} catch (std::exception& e) {
		std::cout << "Caught an error increasing grade: " << e.what() <<  std::endl;
	}
	return ;
}

void Bureaucrat::decreaseGrade(void) {
	try {
		if (this->grade < 150) {
			this->grade++;
			std::cout << this->getName() << " has been demoted to grade " << this->getGrade() << "..." << std::endl;
		}
		else
			throw Bureaucrat::GradeTooLowException();
	} catch (std::exception& e) {
		std::cout << "Caught an error decreasing grade: " << e.what() <<  std::endl;
	}
	return ;
}

void Bureaucrat::signForm(AForm &f) {
	try {
		if (this->getGrade() <= f.getSignGrade()) {
			f.beSigned(*this);
			std::cout << this->getName() << " signed form " << f.getName() << " !" << std::endl;
		}
		else
			throw AForm::GradeTooLowException();
	} catch (std::exception& e) {
		std::cout << "Caught an error in signForm(): " << this->getName() << " couldn't sign " << f.getName() << "... " << e.what() << std::endl;
	}
	return ;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high!\0");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low!\0");
}

std::ostream& operator<<(std::ostream &output, const Bureaucrat &b) {
	output << b.getName() << ", " << b.getGrade();
	return (output);
}
