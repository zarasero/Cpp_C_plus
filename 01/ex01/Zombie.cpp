/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:35:07 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/24 12:37:25 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
};

Zombie::Zombie(std::string name):name(name)
{
};
void Zombie::setName(std::string name)
{
    this->name = name;
}
Zombie::~Zombie()
{
    std::cout << name << ": is dead" << std:: endl;
};

void Zombie:: announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
