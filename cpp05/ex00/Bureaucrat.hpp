/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:22:15 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/16 21:36:01 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat {
	private:
		std::string const name;
		int grade;

	public:
		Bureaucrat(std::string const name, int grade);
		// Bureaucrat(const Bureaucrat &copy);
		//Bureaucrat& operator=(const Bureaucrat &copy);
		~Bureaucrat(void);

		std::string getName(void) const;
		int getGrade(void) const;
		void increaseGrade(void);
		void decreaseGrade(void);

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw(); //pitaa ehk olla virtual?
		};
		
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw(); //pitaa ehk olla virtual?
		};

};

std::ostream& operator<<(std::ostream &output, const Bureaucrat &b);

#endif

