/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:01:54 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/25 15:44:04 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Конструктор по умолчанию
Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Деструктор
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// Конструктор копирования
Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // Используем оператор присваивания
}

// Оператор присваивания
Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) { // Проверяем, не присваиваем ли мы объект сам себе
        this->value = other.value; // Копируем значение
    }
    return *this; // Возвращаем текущий объект
}

// Геттер (получение значения)
int Fixed::getRawBits(void) const {
    return this->value;
}

// Сеттер (установка значения)
void Fixed::setRawBits(int const raw) {
    this->value = raw;
}

// Конструктор из int
Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    int shiftedValue = value << Fixed::fractionalBits;
    //std::cout << "Shifting " << value << " left by " << Fixed::fractionalBits << " bits: " << shiftedValue << std::endl;
    this->value = shiftedValue;
}

// Конструктор из float
Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    float scaledValue = value * (1 << Fixed::fractionalBits);
    int roundedValue = roundf(scaledValue);
    /*std::cout << "Scaling " << value << " by " << (1 << Fixed::fractionalBits) 
              << " -> " << scaledValue << ", rounding -> " << roundedValue << std::endl;*/
    this->value = roundedValue;
}

// Преобразование в int
int Fixed::toInt() const {
    int intValue = this->value >> Fixed::fractionalBits;
    /*std::cout << "Converting " << this->value << " to int by shifting right by " 
              << Fixed::fractionalBits << " bits: " << intValue << std::endl;*/
    return intValue;
}

// Преобразование в float
float Fixed::toFloat() const {
    float floatValue = (float)this->value / (1 << Fixed::fractionalBits);
    /*std::cout << "Converting " << this->value << " to float by dividing by " 
              << (1 << Fixed::fractionalBits) << ": " << floatValue << std::endl;*/
    return floatValue;
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return out;
}


