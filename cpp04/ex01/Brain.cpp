/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:39:06 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/15 13:39:08 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++){
        this->ideas[i] = "idea number " + std::to_string(i);
    }
    return ;
}

Brain::Brain(const Brain &copy){
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Brain& Brain::operator=(const Brain &copy){
    std::cout << "Brain copy assignment constructor called" << std::endl;
    if (this != &copy){
        for (int i = 0; i < 100; i++){
            this->ideas[i] = copy.ideas[i];
        }
    }
    return (*this);
}

Brain::~Brain(void){
    std::cout << "Brain destructor called" << std::endl;
    return ;
}

std::string Brain::returnIdea(int i){
    return (this->ideas[i]);
}
