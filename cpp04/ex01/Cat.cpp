/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:26:26 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/14 13:25:21 by tuukka           ###   ########.fr       */
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
    return ;
}

Cat& Cat::operator=(const Cat &copy){
    std::cout << "Cat copy assignment constructor called." << std::endl;
    Animal::operator=(copy);
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
