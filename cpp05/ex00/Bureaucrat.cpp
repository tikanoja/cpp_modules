/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:22:23 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/16 10:22:25 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade){
    std::cout << "Bureaucrat constructor called" << std::endl;
    this->name = name;
    this->grade = grade;
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy){
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy){
    std::cout << "Bureaucrat copy assignment constructor called" << std::endl;
    return (*this);
}

Bureaucrat::~Bureaucrat(void){
    std::cout << "Bureaucrat destructor called" << std::endl;
    return ;
}

std::string Bureaucrat::getName(void) const{
    return (this->name);
}

int Bureaucrat::getGrade(void) const{
    return (this->grade);
}

std::ostream& operator<<(std::ostream &output, const Bureaucrat &b){
    output << b.getName() << " " << b.getGrade();
    return (output);
}
