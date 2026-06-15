/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:00:00 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/24 18:00:55 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;

    std::cout << "Level: DEBUG" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\nLevel: INFO" << std::endl;
    harl.complain("INFO");

    std::cout << "\nLevel: WARNING" << std::endl;
    harl.complain("WARNING");

    std::cout << "\nLevel: ERROR" << std::endl;
    harl.complain("ERROR");

    std::cout << "\nLevel: UNKNOWN" << std::endl;
    harl.complain("UNKNOWN");  // В случае неизвестного уровня

    return 0;
}

