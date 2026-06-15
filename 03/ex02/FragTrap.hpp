/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 13:38:25 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/03 13:39:58 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    // Конструкторы
    FragTrap();  // Конструктор по умолчанию
    FragTrap(std::string name);  // Конструктор с параметром
    FragTrap(const FragTrap& src);  // Конструктор копирования
    ~FragTrap();  // Деструктор

    // Оператор присваивания
    FragTrap& operator=(const FragTrap& rhs);


    // Новый метод
    void highFiveGuys();
};

#endif

