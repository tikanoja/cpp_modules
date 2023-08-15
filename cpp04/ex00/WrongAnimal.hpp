/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:27:04 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/04 10:27:05 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal{
    protected:
        std::string type;

    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal& operator=(const WrongAnimal &copy);
        std::string getType(void) const;
        ~WrongAnimal(void);
        void makeSound() const;
};

#endif
