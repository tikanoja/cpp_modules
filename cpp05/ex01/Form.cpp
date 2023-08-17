/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:54:22 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/17 13:40:05 by ttikanoj         ###   ########.fr       */
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
		//do sth
	}
	return ;
}

Form::~Form(void) {
	std::cout << "Form destructor called" << std::endl;
	return ;
}