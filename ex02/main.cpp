/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rilliano <rilliano@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:40:58 by rilliano          #+#    #+#             */
/*   Updated: 2024/12/15 17:09:56 by rilliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const int numAnimals = 4;
    const AAnimal* animals[numAnimals];

    std::cout << "Creating animals" << std::endl << std::endl;

    for (int i = 0; i < numAnimals / 2; ++i) {
        animals[i] = new Dog();
    }
    for (int i = numAnimals / 2; i < numAnimals; ++i) {
        animals[i] = new Cat();
    }

    std::cout << std::endl << "Testing deep copy" << std::endl << std::endl;

    Dog originalDog;
    originalDog.getBrain()->setIdea(0, "Chase the cat");
    Dog copiedDog = originalDog;
    std::cout << "Original Dog Idea: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog Idea: " << copiedDog.getBrain()->getIdea(0) << std::endl;

    Cat originalCat;
    originalCat.getBrain()->setIdea(0, "Climb the tree");
    Cat copiedCat = originalCat;
    std::cout << "Original Cat Idea: " << originalCat.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Cat Idea: " << copiedCat.getBrain()->getIdea(0) << std::endl;

    std::cout << std::endl << "Destroying animals" << std::endl << std::endl;

    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];
    }

    return 0;
}
