/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 09:29:04 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/04 09:29:11 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(){
    std::cout << "ScavTrap constructor called (void input)" << std::endl;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << "ScavTrap constructor called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    return ;
}

ScavTrap::~ScavTrap(void){
    std::cout << "ScavTrap destructor called" << std::endl;
    return ;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy){
    std::cout << "ScavTrap copy constructor called" << std::endl;
    return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy){
    std::cout << "ScavTrap copy assignment constructor called" << std::endl;
    if (this != &copy){
        this->name = copy.name;
        this->hit_points = copy.hit_points;
        this->energy_points = copy.energy_points;
        this->attack_damage = copy.attack_damage;
    }
    return (*this);
}

void ScavTrap::attack(const std::string& target){
    if (this->hit_points == 0){
        std::cout << this->name << " is dead and unable to attack...!" << std::endl;
        return ;
    } else if (this->energy_points == 0){
        std::cout << this->name << " is out of energy and cannot attack...!" << std::endl;
        return ;
    }
    std::cout << this->name << " scavs away and " << target << " loses " << this->attack_damage << " health points!" << std::endl;
    this->energy_points--;
    return ;
}

void ScavTrap::guardGate(void){
    if (this->hit_points == 0)
        std::cout << this->name << " is dead and unable to enter gatekeeper mode." << std::endl;
    else if (this->energy_points == 0)
        std::cout << this->name << " is out of energy and unable to enter gatekeeper mode." << std::endl;
    else
        std::cout << this->name << " is now in Gatekeeper mode." << std::endl;
    return ;
}
