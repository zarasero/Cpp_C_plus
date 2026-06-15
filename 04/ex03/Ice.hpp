/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:00:59 by zserobia          #+#    #+#             */
/*   Updated: 2025/04/01 15:01:16 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ice.hpp (Специфический класс Ice)
#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
    Ice();  // Конструктор по умолчанию
    Ice(Ice const & other); // Конструктор копирования
    Ice& operator=(Ice const & other); // Оператор присваивания
    virtual ~Ice(); // Виртуальный деструктор

    virtual AMateria* clone() const; // Метод клонирования, возвращающий новый объект Ice
    virtual void use(ICharacter& target); // Переопределенный метод использования
};

#endif // ICE_HPP
