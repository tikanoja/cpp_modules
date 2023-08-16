/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:27:31 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/16 12:05:42 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // tee animal array
    Animal* myPets[10];
    //tayta puolet kiisu ja koira
    for (int i = 0; i < 10; i++){
        if (i < 5)
            myPets[i] = new Dog();
        else
            myPets[i] = new Cat();
    }
    std::cout << std::endl;
    //laita elaimet laulamaan ja kerro ideat
    for (int i = 0; i < 10; i++){
        myPets[i]->makeSound();
    }
    std::cout << std::endl;
    for (int i = 0; i < 100; i++){
        std::cout << myPets[1]->getIdea(i) << std::endl;
    }
    std::cout << std::endl;
    //delete elaimet
    for (int i = 0; i < 10; i++){
        delete myPets[i];
    }
    std::cout << std::endl;

    //shallow/deep test
    Cat original;
    {
        std::cout << "Address of Catbrain:" << original.getBrain() << std::endl;
        Cat copy = original;
        std::cout << "Address of Catbrain after copy:" << copy.getBrain() << std::endl;
    }
    // {
    //     std::cout << "Address of Catbrain:" << original.getBrain() << std::endl;
    //     Cat anotherCopy(original);
    //     std::cout << "Address of Catbrain after copy:" << anotherCopy.getBrain() << std::endl;
    // }
    std::cout << "copy now out of scope" << std::endl;
    return 0;
}
