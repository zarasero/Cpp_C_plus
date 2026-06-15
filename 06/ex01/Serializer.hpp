/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:38:55 by zserobia          #+#    #+#             */
/*   Updated: 2025/04/10 16:25:12 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

// Структура данных для сериализации
typedef struct Data {
    int num; // Пример переменной
} s_Data;

class Serializer {
public:
    // Статический метод сериализации (преобразование указателя в число)
    static unsigned long serialize(Data* ptr);

    // Статический метод десериализации (преобразование числа обратно в указатель)
    static Data* deserialize(unsigned long raw);

private:
    // Запрещаем создание экземпляров этого класса
    Serializer();
    ~Serializer();
    Serializer(const Serializer&); // Запрещаем копирование
    Serializer& operator=(const Serializer&); // Запрещаем присваивание
};



#endif // SERIALIZER_HPP
