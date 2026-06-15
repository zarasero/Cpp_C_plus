/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:57:18 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/24 18:59:00 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int value;
    static const int fractionalBits = 8;

public:
    Fixed();                      // Конструктор по умолчанию
    ~Fixed();                     // Деструктор
    Fixed(const Fixed &other);    // Конструктор копирования
    Fixed &operator=(const Fixed &other); // Оператор присваивания
    int getRawBits(void) const;   // Геттер
    void setRawBits(int const raw); // Сеттер
};

#endif


