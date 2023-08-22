/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:45:51 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/22 14:54:38 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5), target("Default") {
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const newTarget) : AForm("PresidentialPardonForm", 25, 5), target(newTarget) {
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm("PresidentialPardonForm", 25, 5), target(copy.target) {
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	this->setSignature(copy.getSignature());
	return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy) {
	std::cout << "PresidentialPardonForm copy assignment constructor called" << std::endl;
	if (this != &copy)
		this->setSignature(copy.getSignature());
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
	return ;
}

int PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	if (!AForm::execChecker(executor)) {
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
		return (0);
	}
	else {
		std::cout << this->target << " has not been pardoned by our beloved president... Sentence: DEATH!" << std::endl;
		return (1);
	}
	return (0);
}
