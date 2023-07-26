/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:20:27 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/24 17:38:10 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon){
    return ;
}

HumanA::~HumanA(void){
    return ;
}
void    HumanA::attack(void){
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
    return ;
}
