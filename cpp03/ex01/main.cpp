/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:53:19 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/03 15:25:08 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
    ClapTrap clap("Clap");
    ScavTrap scav("Scav");
    // ScavTrap copy1(scav);
    // ScavTrap copy2 = copy1;


    // copy1.attack("???");
    // copy2.attack("???");
    clap.attack("your bully");
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
    //     scav.attack("a zombie bee");
    // }
    clap.takeDamage(200);
    scav.takeDamage(200);
    return (0);
}
