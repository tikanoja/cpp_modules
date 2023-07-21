/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:14:38 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/21 15:14:41 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void){
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "Memory address of the string: " << &brain << std::endl;
    std::cout << "Memory address of the pointer to string: " << &stringPTR << std::endl;
    std::cout << "Memory address of the reference to string: " << &stringREF << std::endl << std::endl;

    std::cout << "Value of the string: " << brain << std::endl;
    std::cout << "Value of the pointer to string: " << stringPTR << std::endl;
    std::cout << "Value of the reference to string: " << stringREF << std::endl;
}
