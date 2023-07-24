/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:21:00 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/24 17:37:42 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){
    return ;
}

Weapon::Weapon(std::string weapon){
    this->type = weapon;
    return ;
}

Weapon::~Weapon(void){
    return ;
}

const std::string& Weapon::getType(){
    return (this->type);
}

void Weapon::setType(std::string type){
    this->type = type;
    return ;
}
