/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:08:38 by zserobia          #+#    #+#             */
/*   Updated: 2025/04/24 13:10:37 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iterator>
#include <iostream>

class Span {
private:
    unsigned int _N;               // Максимальное количество чисел, которое может храниться
    std::vector<int> _numbers;     // Вектор для хранения чисел

public:
    // Канонические четыре функции
    Span();                              // Конструктор по умолчанию
    Span(unsigned int N);                // Конструктор с параметром
    Span(const Span &other);             // Конструктор копирования
    Span &operator=(const Span &other);  // Оператор присваивания
    ~Span();                             // Деструктор

    // Метод для добавления одного числа
    void addNumber(int num);

    // Шаблонный метод для добавления диапазона чисел с использованием итераторов
    template <typename Iterator>
    void addNumber(Iterator begin, Iterator end) {
        if (std::distance(begin, end) + _numbers.size() > _N) {
            throw std::runtime_error("Error: The maximum Span size is exceeded.");
        }
        _numbers.insert(_numbers.end(), begin, end);  // Вставка в конец вектора _numbers всех значений из [begin, end)
    }

    // Метод для нахождения самой короткой разницы (span)
    int shortestSpan() const;

    // Метод для нахождения самой длинной разницы (span)
    int longestSpan() const;
};

#endif

