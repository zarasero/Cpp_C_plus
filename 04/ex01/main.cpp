/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:44:47 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/03 21:11:05 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main() {
    std::cout << "--- Creating Animal Array ---" << std::endl;
    const int size = 4;
    Animal* animals[size];
    
    for (int i = 0; i < size / 2; i++)
        animals[i] = new Dog();
    for (int i = size / 2; i < size; i++)
        animals[i] = new Cat();
    
    std::cout << "\n--- Making Sounds ---" << std::endl;
    for (int i = 0; i < size; i++)
        animals[i]->makeSound();
    
    std::cout << "\n--- Deleting Animal Array ---" << std::endl;
    for (int i = 0; i < size; i++)
        delete animals[i];
    
    std::cout << "\n--- Testing Deep Copy ---" << std::endl;
    Cat cat;
    cat.setBrainIdea(10, "Climb a tree");
    std::cout << "Cat's idea[0]: " << cat.getBrainIdea(0) << std::endl;
    std::cout << "Cat's idea[10]: " << cat.getBrainIdea(10) << std::endl;
    std::cout << "\n--- ---" << std::endl;
    return 0;
}
