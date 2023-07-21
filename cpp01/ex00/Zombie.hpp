/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:12:31 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/21 15:12:34 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class	Zombie{
		private:
			std::string name;

		public:
			Zombie(std::string name);
			~Zombie(void);
			void	announce(void);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
