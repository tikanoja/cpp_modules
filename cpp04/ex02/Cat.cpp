/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:26:26 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/16 12:05:48 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal(){
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
    this->catbrain = new Brain();
    return ;
}

Cat::Cat(const Cat &copy) : Animal(copy){
    std::cout << "Cat copy constructor called. Copying " << copy.type << "." << std::endl;
    if (this->catbrain)
        delete this->catbrain;
    this->catbrain = new Brain(*copy.catbrain);
    return ;
}

Cat& Cat::operator=(const Cat &copy){
    std::cout << "Cat copy assignment constructor called." << std::endl;
    Animal::operator=(copy);
    if (this->catbrain)
        delete this->catbrain;
    this->catbrain = new Brain(*copy.catbrain);
    return (*this);
}

Cat::~Cat(void){
    std::cout << "Cat destructor called" << std::endl;
    delete this->catbrain;
    return ;
}

void Cat::makeSound(void) const{
    std::cout << "*Meooooooooow!*" << std::endl;
    return ;
}

std::string Cat::getIdea(int i){
    return (this->catbrain->returnIdea(i));
}

Brain   *Cat::getBrain() const{
    return (this->catbrain);
}
