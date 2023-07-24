/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:14:24 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/24 15:14:55 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    Zombie *zHorde = new Zombie[N];
    for (int i = 0; i <= N; i++)
        zHorde[i].setName(name);
    return (zHorde);
}
