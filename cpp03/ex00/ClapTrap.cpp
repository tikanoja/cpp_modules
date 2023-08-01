/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:53:05 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/01 13:53:07 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
    std::cout << "Default constructor called (void input)" << std::endl;
    this->name = "unnamed";
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name){
    std::cout << "Default constructor called" << std::endl;
    this->name = name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;

}

ClapTrap::ClapTrap(const ClapTrap &copy){
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy){
    std::cout << "Copy assignment constructor called" << std::endl;
    if (this != &copy){
        this->name = copy.name;
        this->hit_points = copy.hit_points;
        this->energy_points = copy.energy_points;
        this->attack_damage = copy.attack_damage;
    }
    return (*this);
}

ClapTrap::~ClapTrap(void){
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    std::cout << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << this->name << " takes " << amount << " points of damage!" << std::endl;
    this->hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    std::cout << this->name << " repairs for " << amount << " points of health!" << std::endl;
    this->hit_points += amount;
}
