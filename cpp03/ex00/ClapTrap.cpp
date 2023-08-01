/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:53:05 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/01 19:23:42 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
    std::cout << "Default constructor called (void input)" << std::endl;
    this->name = "unnamed";
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    return ;
}

ClapTrap::ClapTrap(std::string name){
    std::cout << "Default constructor called" << std::endl;
    this->name = name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    return ;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
    return ;
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
    return ;
}

void ClapTrap::attack(const std::string& target){
    if (this->hit_points == 0){
        std::cout << this->name << " is dead and unable to attack...!" << std::endl;
        return ;
    } else if (this->energy_points == 0){
        std::cout << this->name << " is out of energy and cannot attack...!" << std::endl;
        return ;
    }
    std::cout << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
    this->energy_points--;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->hit_points == 0){
        std::cout << this->name << " is already dead! No need for any more violence!" << std::endl;
        return ;
    } else if (amount > (unsigned int)this->hit_points)
        amount = this->hit_points;
    std::cout << this->name << " takes " << amount << " points of damage!" << std::endl;
    this->hit_points -= amount;
    if (this->hit_points == 0)
        std::cout << this->name << " is dead!" << std::endl;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->hit_points == 0){
        std::cout << this->name << " is dead and unable to repair...!" << std::endl;
        return ;
    } else if (this->energy_points == 0){
        std::cout << this->name << " is out of energy and cannot repair...!" << std::endl;
        return ;
    } else if (amount > (unsigned int)(INT_MAX - this->hit_points))
        amount = INT_MAX - this->hit_points;
    std::cout << this->name << " repairs for " << amount << " points of health!" << std::endl;
    this->hit_points += amount;
    this->energy_points--;
    return ;
}
