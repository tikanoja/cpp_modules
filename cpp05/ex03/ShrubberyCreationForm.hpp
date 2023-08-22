/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:46:10 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/22 15:09:55 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
    private:
        std::string target;

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const newTarget);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);
		~ShrubberyCreationForm(void);

		int execute(Bureaucrat const& executor) const;
};

#endif
