/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:44:09 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/03 20:50:47 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
    type = "Cat";
    brain = new Brain;
    std::cout << "🐱 Cat constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "🐱 Cat destructor called" << std::endl;
    delete brain;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "🐱 Cat copy assignment operator called" << std::endl;
    if (this != &other) {
        this->type = other.type;   // Копируем тип
        delete this->brain;        // Удаляем старую память
        this->brain = new Brain(*other.brain); // Глубокая копия!
    }
    return *this;
}


Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "🐱 Cat copy constructor called" << std::endl;
    this->brain = new Brain(*other.brain); // ✅ Глубокая копия!
}

void Cat::makeSound() const {
    std::cout << "🐱 Cat sound" << std::endl;
}

void Cat::setBrainIdea(int index, const std::string& idea) {
    brain->setIdea(index, idea);  // Доступ к методу setIdea класса Brain
}

std::string Cat::getBrainIdea(int index) const {
    return brain->getIdea(index);  // Доступ к методу getIdea класса Brain
}

