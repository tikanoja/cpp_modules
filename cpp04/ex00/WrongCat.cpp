/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:27:15 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/04 10:27:18 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal(){
    std::cout << "WrongCat constructor called" << std::endl;
    this->type = "WrongCat";
    return ;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy){
    std::cout << "WrongCat copy constructor called. Copying " << copy.type << std::endl;
    return ;
}

WrongCat& WrongCat::operator=(const WrongCat &copy){
    std::cout << "WrongCat copy assignment constructor called. " << this->type << " will be " << copy.type << "from now on" << std::endl;
    WrongAnimal::operator=(copy);
    return (*this);
}

WrongCat::~WrongCat(void){
    std::cout << "WrongCat destructor called" << std::endl;
    return ;
}

void WrongCat::makeSound(void){
    std::cout << "*You cover your ears as you hear the horrible so called 'meow' of the WrongCat*" << std::endl;
}
