/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:19:54 by zserobia          #+#    #+#             */
/*   Updated: 2025/04/10 13:22:01 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        // Создаем бюрократов с разными уровнями
        Bureaucrat boss("Boss", 1);       // Самый высокий уровень
        Bureaucrat manager("Manager", 50);
        Bureaucrat intern("Intern", 150); // Самый низкий уровень

        std::cout << "\n===== Test: Creating forms =====\n";
        ShrubberyCreationForm treeForm("Home"); //145
        RobotomyRequestForm robotForm("John Doe"); //72
        PresidentialPardonForm pardonForm("Alice"); //25

        std::cout << treeForm << std::endl;
        std::cout << robotForm << std::endl;
        std::cout << pardonForm << std::endl;

        std::cout << "\n===== Test: Signing forms =====\n";
        intern.signForm(treeForm);  // Ожидаем ошибку: уровень слишком низкий
        manager.signForm(treeForm); // Ожидаем успех: 50 >= 145
        boss.signForm(robotForm);   // Ожидаем успех: 1 >= 72
        boss.signForm(pardonForm);  // Ожидаем успех: 1 >= 25

        std::cout << "\n===== Test: Completing forms =====\n";
        intern.executeForm(treeForm);  // Ожидаем ошибку: уровень слишком низкий
        manager.executeForm(treeForm); // Ожидаем успех (должно создать ASCII дерево)
        boss.executeForm(robotForm);   // Ожидаем случайный успех (50% шанс на роботомизацию)
        boss.executeForm(pardonForm);  // Ожидаем успех (должен дать помилование)

    } catch (std::exception& e) {
        std::cerr << "Error " << e.what() << std::endl;
    }

    return 0;
}


