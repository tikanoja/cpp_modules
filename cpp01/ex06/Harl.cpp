/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:11:05 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/26 12:11:07 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::info(void){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}
void Harl::warning(void){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::error(void){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain(std::string level){
	void (Harl::*function_ptr_array[4])(void);
	function_ptr_array[0] = &Harl::debug;
	function_ptr_array[1] = &Harl::info;
	function_ptr_array[2] = &Harl::warning;
	function_ptr_array[3] = &Harl::error;

	std::string levels[4];
	levels[0] = "debug";
	levels[1] = "info";
	levels[2] = "warning";
	levels[3] = "error";

	for (int index = 0; index < 4; index++){
		if (levels[index] == level)
		{
			switch (index){
				case 0:
					for (int i = 0; i < 4; i++)
						(this->*function_ptr_array[i])();
					break ;
				case 1:
					for (int i = 1; i < 4; i++)
						(this->*function_ptr_array[i])();
					break ;
				case 2:
					for (int i = 2; i < 4; i++)
						(this->*function_ptr_array[i])();
					break ;
				case 3:
					(this->*function_ptr_array[3])();
					break ;
			}
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
