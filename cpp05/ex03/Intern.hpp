/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:38:49 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/22 10:45:09 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <cctype>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	private:
		AForm* makeShrub(std::string targetName);
		AForm* makeRobo(std::string targetName);
		AForm* makePres(std::string targetName);

	public:
		Intern(void);
		Intern(const Intern& copy);
		Intern& operator=(const Intern& copy);
		~Intern(void);

		AForm* makeForm(std::string formName, std::string targetName);
};

#endif
