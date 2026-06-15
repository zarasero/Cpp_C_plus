/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:39:01 by zserobia          #+#    #+#             */
/*   Updated: 2025/04/16 13:26:00 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// Конструктор
Serializer::Serializer() {
    return;
}

// Деструктор
Serializer::~Serializer() {
    return;
}

// Конструктор копирования
Serializer::Serializer(const Serializer& src) {
    *this = src;
    return;
}

// Оператор присваивания
Serializer& Serializer::operator=(const Serializer& rhs) {
    if (this != &rhs)
        *this = rhs;
    return *this;
}

// Функция сериализации: преобразует указатель в unsigned long
unsigned long Serializer::serialize(Data* ptr) {
    return reinterpret_cast<unsigned long>(ptr);
}

// Функция десериализации: преобразует unsigned long обратно в указатель
Data* Serializer::deserialize(unsigned long raw) {
    return reinterpret_cast<Data*>(raw);
}


