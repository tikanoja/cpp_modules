/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:20:34 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/24 17:40:14 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
    private:
        std::string name;
        Weapon &weapon;

    public:
        HumanA(std::string name, Weapon& weapon);
        HumanA(void);
        ~HumanA(void);
        void attack(void);
};

#endif
