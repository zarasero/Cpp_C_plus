/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:45:14 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/03 20:08:17 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "🔄 WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "🔄 WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}

void WrongAnimal::makeSound() const {
    std::cout << "🔄 Some generic WrongAnimal sound" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    std::cout << "🔄 WrongAnimal copy assignment operator called" << std::endl;
    if (this != &other) {
        this->type = other.getType();
    }
    return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    std::cout << "🔄 WrongAnimal copy constructor called" << std::endl;
    *this = other;
}


