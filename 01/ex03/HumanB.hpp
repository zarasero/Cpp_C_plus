/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:05:57 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/24 13:07:37 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
    std::string name;
    Weapon* weapon;
public:
    HumanB(const std::string& name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon& weapon);
};

