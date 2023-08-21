/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:22:03 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/21 11:12:14 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
	Bureaucrat b("Jimbo", 6);
	// PresidentialPardonForm ppf("Bart");
	// RobotomyRequestForm robo("Homer");
	// b.signForm(robo);
	// robo.execute(b);

	ShrubberyCreationForm forest("nice");
	b.signForm(forest);
	b.executeForm(forest);
	return 0;
}
