/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:00:20 by zserobia          #+#    #+#             */
/*   Updated: 2025/04/01 15:00:36 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cure.hpp (Специфический класс Cure)
#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
    Cure();  // Конструктор по умолчанию
    Cure(Cure const & other); // Конструктор копирования
    Cure& operator=(Cure const & other); // Оператор присваивания
    virtual ~Cure(); // Виртуальный деструктор

    virtual AMateria* clone() const; // Метод клонирования, возвращающий новый объект Cure
    virtual void use(ICharacter& target); // Переопределенный метод использования
};

#endif // CURE_HPP
