/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:16:21 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/24 13:08:50 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie{
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
    private:
        std::string name;
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif