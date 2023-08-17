/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:54:08 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/17 11:04:12 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
	private:
		std::string const name;
		int const signGrade;
		int const execGrade;
		bool signature;
		
	public:
		//constructors & destructors
		Form(std::string const newName, int const newSignGrade, int const newExecGrade);
		Form(const Form& copy);
		Form& operator=(const Form& copy);
		~Form(void);

		//getters and setters for all attributes

		//void beSigned();
		
		class GradeTooHighException : public std::exception {
			
		};

		class GradeTooLowException : public std::exception {
			
		};
};

//insert overload

#endif
