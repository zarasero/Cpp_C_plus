/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:23:16 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/24 18:24:03 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: ./harlFilter <level>" << std::endl; //pour err- cerr
        return 1;
    }

    Harl harl;
    harl.complain(argv[1]);

    return 0;
}
