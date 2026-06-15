/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:09:00 by zserobia          #+#    #+#             */
/*   Updated: 2025/04/24 14:12:43 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"
#include <iostream>

int main() {
    // Создаем объект MutantStack для хранения целых чисел
    MutantStack<int> mstack;

    // Добавляем элементы в стек
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;  // Выводим верхний элемент стека (17)

    mstack.pop();  // Убираем верхний элемент (17)

    // Проверяем размер стека
    std::cout << mstack.size() << std::endl;  // Размер стека (1)

    // Добавляем еще элементы
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    // Используем итераторы для вывода всех элементов
    MutantStack<int>::iterator it = mstack.begin();  // Итератор на начало
    MutantStack<int>::iterator ite = mstack.end();   // Итератор на конец

    // Итерируем через стек и выводим элементы
    ++it;  // Перемещаем итератор на следующий элемент
    --it;  // Перемещаем итератор обратно на исходную позицию

    // Итерация по стеку и вывод значений
    while (it != ite) {
        std::cout << *it << std::endl;  // Выводим значение, на которое указывает итератор
        ++it;  // Переходим к следующему элементу
    }

    // Создаем обычный std::stack, копируя содержимое MutantStack
    std::stack<int> s(mstack);
    std::cout <<s.top() << std::endl;
    return 0;
}

/*
#include <iostream>
#include <list>
#include <stack>

int main() {
    // Создаем объект std::list для хранения целых чисел
    std::list<int> mlist;

    // Добавляем элементы в "стек"
    mlist.push_back(5);
    mlist.push_back(17);
    std::cout << mlist.back() << std::endl;  // Выводим последний элемент (17)

    mlist.pop_back();  // Убираем последний элемент (17)

    // Проверяем размер списка
    std::cout << mlist.size() << std::endl;  // Размер (1)

    // Добавляем еще элементы
    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    mlist.push_back(0);

    // Используем итераторы для вывода всех элементов
    std::list<int>::iterator it = mlist.begin();
    std::list<int>::iterator ite = mlist.end();

    ++it;
    --it;

    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    // Копируем list в стек (по аналогии)
    std::stack<int, std::list<int> >s(mlist);  // std::stack с list как контейнером
    std::cout << s.top() << std::endl;

    return 0;
}
*/

