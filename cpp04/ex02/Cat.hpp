/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:26:34 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/16 11:55:44 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private:
        Brain* catbrain;

    public:
        Cat(void);
        Cat(const Cat &copy);
        Cat& operator=(const Cat &copy);
        ~Cat(void);
        void virtual makeSound() const;
        std::string getIdea(int i);
        Brain   *getBrain() const;
};

#endif
