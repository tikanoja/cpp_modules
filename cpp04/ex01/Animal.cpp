/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:26:12 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/14 13:37:58 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal(void){
    std::cout << "Animal constructor called" << std::endl;
    this->type = "Default animal";
    return ;
}

Animal::Animal(const Animal &copy){
    std::cout << "Animal copy constructor called. Copying " << copy.type << std::endl;
    *this = copy;
    return ;
}

Animal& Animal::operator=(const Animal &copy){
    std::cout << "Animal copy assignment constructor called. " << this->type << " will be " << copy.type << "from now on" << std::endl;
    if (this != &copy){
        this->type = copy.type;
    }
    return (*this);
}

Animal::~Animal(void){
    std::cout << "Animal destructor called, goodbye " << this->type << std::endl;
    return ;
}

void Animal::makeSound(void) const{
    std::cout << "*Default animal noises*" << std::endl;
    return ;
}

std::string Animal::getType(void) const{
    return (this->type);
}
