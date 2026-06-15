/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:05:32 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/24 13:07:13 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) 
    : name(name), weapon(weapon) {}  // ✅ Правильная инициализация

HumanA::~HumanA() {}

void HumanA::attack() {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

