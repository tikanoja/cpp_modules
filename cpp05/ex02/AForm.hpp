/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:54:08 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/18 14:21:31 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

//onks forward declaration ok ?
class Bureaucrat;

class AForm {
	private:
		std::string const name;
		int const signGrade;
		int const execGrade;
		bool signature;
		
	public:
		AForm(std::string const newName, int const newSignGrade, int const newExecGrade);
		AForm(const AForm& copy);
		AForm& operator=(const AForm& copy);
		~AForm(void);

		std::string getName(void) const;
		int getSignGrade(void) const;
		int getExecGrade(void) const;
		bool getSignature(void) const;
		int assignGrade(int grade);
		void beSigned(Bureaucrat& b);
		void virtual execute(Bureaucrat const& executor) = 0;
		
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream &output, const AForm& b);

#endif
