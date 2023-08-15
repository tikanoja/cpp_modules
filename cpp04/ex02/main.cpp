/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:27:31 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/04 10:27:33 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal* cat = new Cat();
    Animal* dog = new Dog();
    std::cout << std::endl;

    cat->makeSound();
    dog->makeSound();
    std::cout << std::endl;

    delete cat;
    delete dog;

    // std::cout << std::endl;
    // Animal* default_animal = new Animal();
    // default_animal->makeSound();
    // delete default_animal;
    return 0;
}
