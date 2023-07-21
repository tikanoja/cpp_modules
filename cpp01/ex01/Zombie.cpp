/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:13:28 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/21 15:13:31 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::setName(std::string name){
    this->name = name;
}

void	Zombie::announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name){
    this->name = name;
    std::cout << "Constructed Zombie: " << name << std::endl;
}

Zombie::Zombie(void){
    this->name = "unnamed";
    std::cout << "Constructed Zombie: " << name << std::endl;
}

Zombie::~Zombie(void){
    std::cout << "Destroyed Zombie: " << this->name << std::endl;
}
