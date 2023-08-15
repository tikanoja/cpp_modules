/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:26:48 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/04 10:26:49 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private:
        Brain* dogbrain;

    public:
        Dog(void);
        Dog(const Dog &copy);
        Dog& operator=(const Dog &copy);
        ~Dog(void);
        void virtual makeSound() const;
        std::string getIdea(int i);
};

#endif
