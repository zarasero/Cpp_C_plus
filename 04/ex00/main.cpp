/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:44:47 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/04 12:44:00 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    std::cout << "--- Correct Animal Tests ---" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound(); // Will output the cat sound
    j->makeSound(); // Will output the dog sound
    meta->makeSound(); // Will output the generic animal sound
    
    delete meta;
    delete j;
    delete i;
    
    std::cout << "\n--- Wrong Animal Tests ---" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    
    std::cout << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound(); // Will output WrongAnimal sound because makeSound is not virtual
    wrongMeta->makeSound();
    
    delete wrongMeta;
    delete wrongCat;
    
    return 0;
}
