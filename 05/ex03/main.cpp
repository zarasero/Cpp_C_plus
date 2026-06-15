/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:19:54 by zserobia          #+#    #+#             */
/*   Updated: 2025/04/10 13:59:41 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    Intern intern;
    AForm* form;

    try {
        form = intern.makeForm("robotomy request", "Bender");
        delete form;
        
        form = intern.makeForm("shrubbery creation", "Garden");
        delete form;
        
        form = intern.makeForm("presidential pardon", "Alice");
        delete form;

        form = intern.makeForm("nonexistent form", "Nobody");  // Здесь будет исключение
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}

/*
int main() {
    Intern intern;

    AForm* form1 = NULL;
    AForm* form2 = NULL;
    AForm* form3 = NULL;
    AForm* form4 = NULL;

    try {
        form1 = intern.makeForm("robotomy request", "Bender");
        form2 = intern.makeForm("shrubbery creation", "Garden");
        form3 = intern.makeForm("presidential pardon", "Zaphod Beeblebrox");
        form4 = intern.makeForm("unknown form", "Unknown Target");  // Ошибка здесь
    } catch (std::exception& e) {
        std::cerr << "Exception caught while creating form: " << e.what() << std::endl;
    }

    Bureaucrat boss("The Boss", 1);

    std::cout << std::endl;

    try {
        if (form1) {
            form1->beSigned(boss);
            form1->execute(boss);
        }
        if (form2) {
            form2->beSigned(boss);
            form2->execute(boss);
        }
        if (form3) {
            form3->beSigned(boss);
            form3->execute(boss);
        }
        if (form4) {
            form4->beSigned(boss);
            form4->execute(boss);
        }
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    delete form1;
    delete form2;
    delete form3;
    delete form4;

    return 0;
}
*/