/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:53:19 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/01 13:53:20 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
    ClapTrap robotti("Aku");
    robotti.attack("Iines");
    robotti.takeDamage(7);
    robotti.beRepaired(10);
    return (0);
}
