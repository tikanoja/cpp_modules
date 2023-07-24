/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:20:47 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/24 17:34:13 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->name = name;
}

HumanB::~HumanB(void){
    return ;
}

void HumanB::setWeapon(Weapon weapon){
    this->weapon = &weapon;
    return ;
}

void    HumanB::attack(void){
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
