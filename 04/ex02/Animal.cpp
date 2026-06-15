/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:43:50 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/03 21:01:52 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// 🏗️ Конструктор Animal
Animal::Animal() : type("Animal") {
    std::cout << "🏗️Animal constructor called" << std::endl;
}

// 🗑️ Виртуальный деструктор Animal
Animal::~Animal() {
    std::cout << "🏗️Animal destructor called" << std::endl;
}

// 🔍 Получение типа животного
std::string Animal::getType() const {
    return type;
}


// 🔄 Оператор присваивания
Animal &Animal::operator=(const Animal &other) {
    std::cout << "🏗️Animal copy assignment operator called" << std::endl;
    if (this != &other) { // 🔄 Проверяем, не присваиваем ли мы объект сам себе
        this->type = other.getType(); // 📋 Копируем значение
    }
    return *this; // 🔄 Возвращаем текущий объект
}

// 📋 Конструктор копирования
Animal::Animal(const Animal &other) {
    std::cout << "🏗️Animal copy constructor called" << std::endl;
    *this = other; // 🔄 Используем оператор присваивания
}
