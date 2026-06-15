/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:15:05 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/03 17:37:51 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main() {
    // Create DiamondTrap object
    DiamondTrap dt("DiamondBot");
    std::cout << "\n---              ---\n" << std::endl;

    // Call methods
    dt.attack("Target");
    std::cout << "\n---              ---\n" << std::endl;
    dt.highFiveGuys();
    std::cout << "\n---              ---\n" << std::endl;
    dt.guardGate();
    std::cout << "\n---              ---\n" << std::endl;
    dt.whoAmI();
    std::cout << "\n---              ---\n" << std::endl;
    /*
    // Copy constructor test
    DiamondTrap dt_copy = dt;
     std::cout << "\n---              ---\n" << std::endl;
    // Assignment operator test
    DiamondTrap dt_assigned;
     std::cout << "\n---              ---\n" << std::endl;
    dt_assigned = dt;
     std::cout << "\n---              ---\n" << std::endl;*/

    return 0;
}




/*В этом задании вам нужно создать DiamondTrap, который будет:
✔ наследоваться от ScavTrap и FragTrap одновременно
✔ Имя DiamondTrap должно совпадать с полем name из ClapTrap
✔ Атрибуты берутся так:

hitPoints → от FragTrap
energyPoints → от ScavTrap
attackDamage → от FragTrap
✔ Метод attack() должен использоваться от ScavTrap
✔ Добавить новый метод whoAmI(), который выводит name и ClapTrap::name*/





