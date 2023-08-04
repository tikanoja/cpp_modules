/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:26:12 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/04 10:26:13 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal(void){
    std::cout << "Animal constructor called (void)" << std::endl;
    this->type = "unidentifiable critter";
    return ;
}

Animal::Animal(std::string type){
    std::cout << "Animal constructor called for type " << type << std::endl;
    this->type = type;
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