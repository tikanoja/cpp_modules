/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:54:08 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/18 11:42:07 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

//onks forward declaration ok ?
class Bureaucrat;

class Form {
	private:
		std::string const name;
		int const signGrade;
		int const execGrade;
		bool signature;
		
	public:
		Form(std::string const newName, int const newSignGrade, int const newExecGrade);
		Form(const Form& copy);
		Form& operator=(const Form& copy);
		~Form(void);

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

std::ostream& operator<<(std::ostream &output, const Form& b);

#endif
