/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:22:15 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/16 10:28:15 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat{
	private:
		std::string const name;
		int grade;

	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat& operator=(const Bureaucrat &copy);
		~Bureaucrat(void);

		std::string getName(void) const;
		int getGrade(void) const;
};

std::ostream& operator<<(std::ostream &output, const Bureaucrat &b);

#endif

