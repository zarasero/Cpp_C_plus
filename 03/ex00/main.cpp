/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:15:05 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/03 14:19:39 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap bot1("BotOne");
    ClapTrap bot2("BotTwo");
    std::cout << "\n--- Start! ---\n" << std::endl;
    
    bot1.attack(bot2.getName());
    std::cout << "\n--------------\n" << std::endl;
    bot1.takeDamage(bot2.getAttackDamage());
    std::cout << "\n--------------\n" << std::endl;
    bot1.beRepaired(5);
    std::cout << "\n--------------\n" << std::endl;
    bot1.takeDamage(5);
    std::cout << "\n--------------\n" << std::endl;
    for (int i = 0; i < 10; i++) {
        bot1.attack("DummyTarget");
    }
    std::cout << "\n--------------\n" << std::endl;
    bot1.attack("FinalTarget");
    bot1.beRepaired(5);
    std::cout << "\n--------------\n" << std::endl;
    bot2.attack(bot1.getName());
    std::cout << "\n--------------\n" << std::endl;
    bot2.takeDamage(bot1.getAttackDamage());
    bot2.attack(bot1.getName());
    bot2.takeDamage(15);
    std::cout << "\n--- Finish! ---\n" << std::endl;
    return 0;
}





