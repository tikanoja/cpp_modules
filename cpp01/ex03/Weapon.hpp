/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:21:06 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/24 17:09:41 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <iostream>

class Weapon{
    private:
        std::string type;

    public:
        Weapon(void);
        Weapon(std::string weapon);
        ~Weapon(void);
        const std::string& getType(void);
        void setType(std::string type);
};

#endif
