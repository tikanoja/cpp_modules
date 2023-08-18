/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:45:51 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/18 16:01:22 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const newTarget) : AForm("PresidentialPardonForm", 25, 5), target(newTarget) {
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm("PresidentialPardonForm", 25, 5), target(copy.target) {
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy) {
	std::cout << "PresidentialPardonForm copy assignment constructor called" << std::endl;
	if (this != &copy)
		this->target = copy.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
	return ;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) {
	if (!AForm::execChecker(executor))
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
	return ;
}
