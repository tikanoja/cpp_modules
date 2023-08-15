/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:26:58 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/04 10:26:59 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){
    std::cout << "WrongAnimal constructor called" << std::endl;
    this->type = "Default WrongAnimal";
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
    std::cout << "WrongAnimal copy constructor called. Copying " << copy.type << std::endl;
    *this = copy;
    return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy){
    std::cout << "WrongAnimal copy assignment constructor called. " << this->type << " will be " << copy.type << "from now on" << std::endl;
    if (this != &copy){
        this->type = copy.type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal(void){
    std::cout << "WrongAnimal destructor called, goodbye " << this->type << std::endl;
    return ;
}

void WrongAnimal::makeSound(void) const{
    std::cout << "*Ungodly screeches of the WrongAnimal*" << std::endl;
    return ;
}

std::string WrongAnimal::getType(void) const{
    return (this->type);
}

