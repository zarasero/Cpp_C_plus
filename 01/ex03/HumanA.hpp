/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:05:43 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/24 13:16:47 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>


class HumanA
{
private:
    std::string name; // Хранит копию имени
    Weapon& weapon;   // Ссылка на существующее оружие (не копия)
public:
    HumanA(const std::string& name, Weapon& weapon);
    ~HumanA();
    void attack();
};


