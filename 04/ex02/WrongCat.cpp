/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:45:35 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/03 21:04:52 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    type = "WrongCat";
    std::cout << "🐱🐱 WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "🐱🐱 WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    std::cout << "🐱🐱 WrongCat copy assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.getType();
    return *this;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
    std::cout << "🐱🐱 WrongCat copy constructor called" << std::endl;
    *this = other;
}

void WrongCat::makeSound() const {
    std::cout << "🐱🐱 WrongCat sound" << std::endl;
}

