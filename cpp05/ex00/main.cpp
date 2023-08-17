/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:22:03 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/17 09:52:21 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
    std::cout << "INSTANTIATING Jim WITH LOW GRADE" << std::endl;
    Bureaucrat jim("Jim", 999999999);
    jim.decreaseGrade();
    jim.increaseGrade();
    std::cout << jim << std::endl;
    std::cout << std::endl;

    std::cout << "INSTANTIATING Tim WITH HIGH GRADE" << std::endl;
    Bureaucrat tim("Tim", -100000);
    tim.increaseGrade();
    tim.decreaseGrade();
    std::cout << tim << std::endl;
    std::cout << std::endl;

    std::cout << "INSTANTIATING WITH Bureaucrat james(jim);" << std::endl;
    Bureaucrat james(jim);
    james.increaseGrade();
    std::cout << james << std::endl;
    std::cout << std::endl;

    std::cout << "INSTANTIATING WITH Bureaucrat john = james;" << std::endl;
    Bureaucrat john = james;
    john.increaseGrade();
    std::cout << john << std::endl;
    std::cout << std::endl;
    
    return 0;
}
