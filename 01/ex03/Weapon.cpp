/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:06:39 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/24 13:07:58 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &weapon)
{
    this->weapon = weapon;
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}


const std::string &Weapon::getType() const
{
    return this->weapon;
}

void Weapon::setType(const std::string &weapon)
{
    this->weapon = weapon;
}