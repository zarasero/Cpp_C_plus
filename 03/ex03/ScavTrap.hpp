/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:30:46 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/03 17:14:28 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    // Конструкторы
    ScavTrap();  // Конструктор по умолчанию
    ScavTrap(std::string name);  // Конструктор с параметром
    ScavTrap(const ScavTrap& src);  // Конструктор копирования
    virtual ~ScavTrap();  // Деструктор

    // Оператор присваивания
    ScavTrap& operator=(const ScavTrap& rhs);

    // Переопределенный метод атаки
    void attack(const std::string& target);

    // Новый метод
    void guardGate();
};

#endif
