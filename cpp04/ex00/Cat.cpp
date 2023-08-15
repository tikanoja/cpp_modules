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
    std::cout << "Cat constructor called (void input)" << std::endl;
    return ;
};

Cat::Cat(std::string type) : Animal(type){
    std::cout << "Cat constructor called for type " << type << std::endl;
    return ;
}

Cat::Cat(const Cat &copy) : Animal(copy){
    std::cout << "Cat copy constructor called. Copying " << copy.type << std::endl;
    return ;
}

Cat& Cat::operator=(const Cat &copy){
    std::cout << "Cat copy assignment constructor called. " << this->type << " will be " << copy.type << "from now on" << std::endl;
    Animal::operator=(copy);
    return ;
}

Cat::~Cat(void){
    std::cout << "Cat destructor called" << std::endl;
    return ;
};