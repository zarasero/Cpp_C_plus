/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:35:21 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/24 13:09:10 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie{
    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie();
        void announce(void);
        void setName(std::string name);
    private:
        std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif