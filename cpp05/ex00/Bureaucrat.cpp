/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:22:23 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/16 14:11:16 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name), grade(grade) {
    std::cout << "Bureaucrat constructor called" << std::endl;
    return ;
}

// ei voi assign ku on const member ?
// Bureaucrat::Bureaucrat(const Bureaucrat &copy){
//     std::cout << "Bureaucrat copy constructor called" << std::endl;
//     *this = copy;
//     return ;
// }

//ei voi assign ku on const member ?
// Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy){
//     std::cout << "Bureaucrat copy assignment constructor called" << std::endl;
//     if (this != &copy){
//         this->name = copy.getName();
//         this->grade = copy.getGrade();
//     }
//     return (*this);
// }

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
        this->grade--;
        if (this->getGrade() < 1) {
            throw Bureaucrat::GradeTooHighException();
        }
    } catch (std::exception & e) {
        std::cout << "wha tthe fug" << std::endl;
    }
    return ;
}

void Bureaucrat::decreaseGrade(void) {
    this->grade++;
    return ;
}

int Bureaucrat::GradeTooHighException() {
    std::cout << "Grade too high! Bureaucrat: " << this->getName() << " Grade: " << this->getGrade() << std::endl;
    return (1);
}

int Bureaucrat::GradeTooLowException() {
    return (1);
}

std::ostream& operator<<(std::ostream &output, const Bureaucrat &b) {
    output << b.getName() << " " << b.getGrade();
    return (output);
}
