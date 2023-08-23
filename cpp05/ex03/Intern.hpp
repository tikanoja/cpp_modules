/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:38:49 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/23 09:32:59 by tuukka           ###   ########.fr       */
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
		int argChecker(std::string formName, std::string targetName);

	public:
		Intern(void);
		Intern(const Intern& copy);
		Intern& operator=(const Intern& copy);
		~Intern(void);

		AForm* makeForm(std::string formName, std::string targetName);

		class noMatchException : public std::exception {
			public:
				const char* what() const throw();
		};

		class shortFormNameException : public std::exception {
			public:
				const char* what() const throw();
		};

		class emptyInputException : public std::exception {
			public:
				const char* what() const throw();
		};
};

#endif
