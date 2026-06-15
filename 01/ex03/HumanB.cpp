/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:06:08 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/24 13:07:29 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) {
    this->name = name;
    this->weapon = NULL;  // Изначально у Джима нет оружия
}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;  // Теперь weapon будет указывать на переданный объект
}

HumanB::~HumanB() {}

void HumanB::attack() {
    if (this->weapon) 
        std::cout << name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon" << std::endl;
}
