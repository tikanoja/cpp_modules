/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:53:19 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/03 16:07:45 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){
    ClapTrap clap("Clap");
    ScavTrap scav("Scav");
    FragTrap frag("Frag");

    clap.attack("your mom");
    scav.attack("some kind of goblin");
    clap.takeDamage(5);
    scav.takeDamage(5);
    clap.beRepaired(5);
    scav.beRepaired(5);
    scav.guardGate();
    // for (int i = 0; i < 9; i++){
    //     clap.attack("an annoying mosquito");
    // }
    // for (int i = 0; i < 49; i++){
    //     scav.attack("the goblin king");
    // }
    clap.takeDamage(200);
    scav.takeDamage(200);
    frag.highFivesGuys();
    //as the objects are on the stack, we'll start destroying them LIFO
    return (0);
}
