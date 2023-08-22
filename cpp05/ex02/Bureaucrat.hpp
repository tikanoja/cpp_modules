/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:22:15 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/22 09:47:35 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>

#include "AForm.hpp"

class AForm;

class Bureaucrat {
	private:
		std::string const name;
		int grade;

	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& copy);
		~Bureaucrat(void);

		std::string getName(void) const;
		int getGrade(void) const;
		void increaseGrade(void);
		void decreaseGrade(void);
		void signForm(AForm &f);
		void executeForm(AForm const& form);

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream &output, const Bureaucrat& b);

#endif

