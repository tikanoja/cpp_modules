/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:26:19 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/14 13:37:02 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal{
    protected:
        std::string type;

    public:
        Animal(void);
        Animal(const Animal &copy);
        Animal& operator=(const Animal &copy);
        std::string getType(void) const;
        virtual ~Animal(void);
        void virtual makeSound() const;
        virtual std::string getIdea(int i);
};

#endif
