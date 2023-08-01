/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:53:19 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/01 19:21:18 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
    ClapTrap robotti("Aku");
    robotti.attack("Iines");
    robotti.takeDamage(7);
    robotti.beRepaired(10);
    robotti.takeDamage(4);
    robotti.beRepaired(1111155);
    robotti.beRepaired(2147483650);
    robotti.takeDamage(2147483650);
    robotti.attack("Iines");
    return (0);
}
