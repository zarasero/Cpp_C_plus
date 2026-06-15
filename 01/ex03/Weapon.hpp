/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:06:47 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/24 13:08:09 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string weapon;
public:
Weapon(const std::string &weapon);
Weapon();
~Weapon();
const std::string &getType() const;
void setType(const std::string &weapon);
};

#endif
