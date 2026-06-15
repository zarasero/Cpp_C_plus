/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:15:12 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/24 12:30:57 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    randomChump("z");
    Zombie* x;
    x = newZombie("x");
    Zombie y("y");
    delete x;
    return (0);
}
