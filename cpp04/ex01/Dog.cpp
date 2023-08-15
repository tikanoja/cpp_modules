/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:26:41 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/04 10:26:42 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal(){
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
    return ;
}

Dog::Dog(const Dog &copy) : Animal(copy){
    std::cout << "Dog copy constructor called. Copying " << copy.type << std::endl;
    return ;
}

Dog& Dog::operator=(const Dog &copy){
    std::cout << "Dog copy assignment constructor called. " << this->type << " will be " << copy.type << "from now on" << std::endl;
    Animal::operator=(copy);
    return (*this);
}

Dog::~Dog(void){
    std::cout << "Dog destructor called" << std::endl;
    return ;
}

void Dog::makeSound(void) const{
    std::cout << "*Woof woof!*" << std::endl;
    return ;
}
