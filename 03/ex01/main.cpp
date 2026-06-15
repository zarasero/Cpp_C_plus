/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:15:05 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/03 14:43:27 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::cout << "\n---       ClapTrap          ---\n";
    ClapTrap bot1("Anna");
    std::cout << "\n---                 ---\n";
    bot1.attack("Alice");
    std::cout << "\n---                 ---\n";
    bot1.beRepaired(3);
    std::cout << "\n---                 ---\n";
    bot1.takeDamage(5);
    std::cout << "\n---        ScavTrap         ---\n";
    ScavTrap bot2("Liza");
    std::cout << "\n---                 ---\n";
    std::cout << "name getter = " << bot2.getName() << std::endl;
    std::cout << "\n---                 ---\n";
    bot2.attack("Kate");
    std::cout << "\n---                 ---\n";
    bot2.takeDamage(30);
    std::cout << "\n---                 ---\n";
    bot2.beRepaired(20);
    std::cout << "\n---                 ---\n";
    bot2.guardGate();
    std::cout << "\n---                 ---\n";
    /*ClapTrap bot3;
    bot3 = bot1;
    std::cout << "\n---                 ---\n";
    ScavTrap bot4;
    bot4 = bot2;*/
    std::cout << "\n---                 ---\n";
    return 0;
}





