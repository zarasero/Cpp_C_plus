/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:37:29 by zserobia          #+#    #+#             */
/*   Updated: 2025/04/10 12:54:45 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat; // Forward declaration

class Form {
public:
    // 🔹 Каноническая форма
    Form(); // Конструктор по умолчанию
    Form(const Form& other); // Копирующий конструктор
    Form& operator=(const Form& other); // Оператор присваивания
    ~Form(); // Деструктор

    // 🔹 Конструктор с параметрами
    Form(std::string name, int gradeRequiredToSign, int gradeRequiredToExecute);

    // 🔹 Геттеры
    std::string getName() const;
    bool getSigned() const;
    int getGradeRequiredToSign() const;
    int getGradeRequiredToExecute() const;

    // 🔹 Метод подписания
    void beSigned(const Bureaucrat& bureaucrat);



    // 🔹 Вложенные классы исключений
    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw() {
            return "Form: Grade is too high.";
        }
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw() {
            return "Form: Grade is too low.";
        }
    };

private:
    const std::string _name;
    bool _signed;
    const int _gradeRequiredToSign;
    const int _gradeRequiredToExecute;
};
    // 🔹 Перегрузка оператора <<
    std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
