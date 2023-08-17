/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:54:22 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/17 17:10:19 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const newName, int const newSignGrade, int const newExecGrade) \
	: name(newName), signGrade(newSignGrade), execGrade(newExecGrade), signature(0) {
	std::cout << "Form constructor called" << std::endl;
	return ;
}

Form::Form(const Form &copy) \
	: name(copy.name), signGrade(copy.signGrade), execGrade(copy.execGrade), signature(copy.signature) {
	std::cout << "Form copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Form& Form::operator=(const Form &copy) {
	std::cout << "Form copy assignment constructor called" << std::endl;
	if (this != &copy){
		this->signature = copy.signature;
	}
	return (*this);
}

Form::~Form(void) {
	std::cout << "Form destructor called" << std::endl;
	return ;
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("Grade too high!\0");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Grade too low!\0");
}

std::string Form::getName(void) const {
	return (this->name);
}

int Form::getSignGrade() const {
	return (this->signGrade);
}

int Form::getExecGrade() const {
	return (this->execGrade);
}

bool Form::getSignature() const {
	return (this->signature);
}

void Form::beSigned(Bureaucrat b) {
	return ;
}

std::ostream& operator<<(std::ostream &output, const Form &f) {
	output << "form name: " << f.getName() << ", sign grade: " << f.getSignGrade() << ", exec grade: " << f.getExecGrade() << ", signature: " << f.getSignature();
	return (output);
}
