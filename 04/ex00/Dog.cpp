/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:44:34 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/03 19:46:41 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog () : Animal() {
    type = "Dog";
    std::cout << "🐶 Dog constructor called" << std::endl;
}

Dog::~Dog () {
    std::cout << "🐶 Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog  &other) {
    std::cout << "🐶 Dog copy assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.getType();
    return *this;
}

Dog::Dog (const Dog  &other) : Animal(other) {
    std::cout << "🐶 Dog copy constructor called" << std::endl;
    *this = other;
}

void Dog::makeSound() const {
    std::cout << "🐶 Dog sound" << std::endl;
}
