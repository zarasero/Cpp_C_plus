/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:19:54 by zserobia          #+#    #+#             */
/*   Updated: 2025/04/08 15:15:20 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat john("John", 3);  // Создаем бюрократа
        Form form("Tax Form", 5, 50);  // Создаем форму с уровнями для подписания и выполнения  
        std::cout << form << std::endl;  // Печатаем информацию о форме
        john.signForm(form);  // Пытаемся подписать форму
        std::cout << form << std::endl;  // Печатаем информацию о форме после подписания
        
        std::cout << "====================" << std::endl;
        Form form_2("Tax_2 Form", 1, 50);  // Создаем форму с уровнями для подписания и выполнения  
        std::cout << form_2 << std::endl;  // Печатаем информацию о форме
        john.signForm(form_2);  // Пытаемся подписать форму
        std::cout << form_2 << std::endl;  // Печатаем информацию о форме после подписания
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}

