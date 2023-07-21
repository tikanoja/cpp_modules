/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:14:13 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/21 15:14:16 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void){
    Zombie *horde = zombieHorde(9, "Shaun");
    for (int i = 0; i < 9; i++)
        horde[i].announce();
    delete[] horde;
    return (0);
}
