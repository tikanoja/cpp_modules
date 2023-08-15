/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:27:31 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/15 21:37:36 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    //tee animal array
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
    // for (int i = 0; i < 100; i++){
    //     std::cout << myPets[1]->getIdea(i) << std::endl;
    // }
    // std::cout << std::endl;
    //delete elaimet
    for (int i = 0; i < 10; i++){
        delete myPets[i];
    }

    // //shallow/deep test
    // Cat original;
    // {
    //     Cat copy = original;
    // }
    // // {
    // //     Cat anotherCopy(original);
    // // }
    // std::cout << "copy now out of scope" << std::endl;
    return 0;
}
