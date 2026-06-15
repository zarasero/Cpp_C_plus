/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 13:41:30 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/03 17:33:05 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

// Конструктор по умолчанию
DiamondTrap::DiamondTrap()
    : ClapTrap("Default_clap_name"), ScavTrap(), FragTrap(), name("Default") {
    this->hitPoints = 100;  // HP от FragTrap
    this->energyPoints = 50;  // EP от ScavTrap
    this->attackDamage = 30;  // AP от FragTrap
    std::cout << "💎 Diamond " << this->name << " is created!" << std::endl;
    std::cout << "💎 Diamond HP: " << this->hitPoints 
    << " | ENP: " << this->energyPoints 
    << " | AP: " << this->attackDamage << std::endl;
}

// Конструктор с параметром
DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name) {
    
    this->hitPoints = 100;  // HP от FragTrap
    this->energyPoints = 50;  // EP от ScavTrap
    this->attackDamage = 30;  // AP от FragTrap

    std::cout << "💎 DiamondTrap " << this->name
              << " is created with ClapTrap name " << ClapTrap::name << "!" 
              << std::endl;
              std::cout << "💎 DiamondTrap HP: " << hitPoints 
              << " | ENP: " << energyPoints 
              << " | AP: " << attackDamage << std::endl;
}

// Конструктор копирования
DiamondTrap::DiamondTrap(const DiamondTrap& other) 
    : ClapTrap(other), ScavTrap(other), FragTrap(other), name(other.name) {
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

    std::cout << "💎 DiamondTrap " << this->name << " is copied!" << std::endl;
    std::cout << "💎 DiamondTrap HP: " << hitPoints 
    << " | ENP: " << energyPoints 
    << " | AP: " << attackDamage << std::endl;
}

// Оператор присваивания
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    std::cout << "💎 DiamondTrap Operator = is called" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "💎 DiamondTrap " << this->name << " is assigned!" << std::endl;
    return *this;
}

// Деструктор
DiamondTrap::~DiamondTrap() {
    std::cout << "💎 DiamondTrap " << this->name << " is destroyed!" << std::endl;
}

// Новый метод
void DiamondTrap::whoAmI() {
    std::cout << "💎 I am " << this->name
              << " and my ClapTrap name is " << ClapTrap::name << "!" 
              << std::endl;
}

