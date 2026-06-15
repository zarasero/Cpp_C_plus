/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:43:59 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/03 19:46:15 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

// 🐾 Базовый класс Animal
class Animal {
protected:
    std::string type; // 🏷️ Тип животного
public:
    // 🏗️ Конструктор
    Animal();
    
    // 🗑️ Виртуальный деструктор (важно для корректного удаления наследников)
    virtual ~Animal();
    
    // 🔍 Виртуальная функция для получения типа животного
    virtual std::string getType() const;
    
    // 🔊 Виртуальная функция для издания звука (переопределяется в наследниках)
    virtual void makeSound() const;
    
    // 🔄 Оператор присваивания
    Animal &operator=(const Animal &other);
    
    // 📋 Конструктор копирования
    Animal(const Animal &other);
};

#endif


