/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:46:01 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/21 09:35:09 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const newTarget) : AForm("RobotomyRequestForm", 72, 45), target(newTarget) {
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm("RobotomyRequestForm", 72, 45), target(copy.target) {
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy) {
	std::cout << "RobotomyRequestForm copy assignment constructor called" << std::endl;
	if (this != &copy)
		this->target = copy.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
	return ;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) {
	if (!AForm::execChecker(executor)) {
		std::cout << "*Vrrrrrrrrzzzbzzrrrrrrrr...!* ";
		std::srand((std::time(nullptr)));
		if (std::rand() % 2)
			std::cout << this->target << " has been robotomized successfully! Beep boop!" << std::endl;
		std::cout << "Oh no! The robotomy failed! Please recycle " << this->target << " with metal waste." << std::endl;
	}
	else
		std::cout << "Robotomy form " << this->target << " has not been passed!" << std::endl;
	return ;
}
