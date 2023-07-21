/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:13:38 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/21 15:13:40 by ttikanoj         ###   ########.fr       */
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
			Zombie();
			~Zombie(void);
			void	announce(void);
			void	setName(std::string name);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
