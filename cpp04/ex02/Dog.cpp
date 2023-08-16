/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:26:41 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/16 12:07:22 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal(){
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
    this->dogbrain = new Brain();
    return ;
}

Dog::Dog(const Dog &copy) : Animal(copy){
    std::cout << "Dog copy constructor called: Copying " << copy.type << "." << std::endl;
    if (this->dogbrain)
        delete this->dogbrain;
    this->dogbrain = new Brain(*copy.dogbrain);
    return ;
}

Dog& Dog::operator=(const Dog &copy){
    std::cout << "Dog copy assignment constructor called." << std::endl;
    Animal::operator=(copy);
    if (this->dogbrain)
        delete this->dogbrain;
    this->dogbrain = new Brain(*copy.dogbrain);
    return (*this);
}

Dog::~Dog(void){
    std::cout << "Dog destructor called" << std::endl;
    delete this->dogbrain;
    return ;
}

void Dog::makeSound(void) const{
    std::cout << "*Woof woof!*" << std::endl;
    return ;
}

std::string Dog::getIdea(int i){
    return (this->dogbrain->returnIdea(i));
}

Brain   *Dog::getBrain() const{
    return (this->dogbrain);
}
