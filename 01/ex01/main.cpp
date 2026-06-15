/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:34:41 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/24 12:36:18 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    Zombie* x;
    x = zombieHorde(10, "x");
    for(int i = 0; i < 10; i++)
        x[i].announce();
    delete[] x;
    return (0);
}
