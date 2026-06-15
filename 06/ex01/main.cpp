/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:37:14 by zserobia          #+#    #+#             */
/*   Updated: 2025/04/15 13:16:22 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"


int main() {
    // Первый объект
    Data data = {40};
    unsigned long serializedData = Serializer::serialize(&data);
    std::cout << "Hex: Address:   " << &data << std::endl;
    std::cout << "Dec: Serialized address: " << serializedData << std::endl;

    Data* deserializedData = Serializer::deserialize(serializedData);
    std::cout << "Deserialized data: " << deserializedData->num << std::endl;

    std::cout << "------------------------" << std::endl;

    // Второй объект
    Data data1 = {40};
    unsigned long serializedData1 = Serializer::serialize(&data1);
    std::cout << "Hex: Address1:  " << &data1 << std::endl;
    std::cout << "Dec: Serialized address1: " << serializedData1 << std::endl;

    Data* deserializedData1 = Serializer::deserialize(serializedData1);
    std::cout << "Deserialized data1: " << deserializedData1->num << std::endl;

    std::cout << "------------------------" << std::endl;

    // Третий объект — копия второго
    Data data2 = data1;
    unsigned long serializedData2 = Serializer::serialize(&data2);
    std::cout << "Hex: Address2:  " << &data2 << std::endl;
    std::cout << "Dec: Serialized address2: " << serializedData2 << std::endl;

    Data* deserializedData2 = Serializer::deserialize(serializedData2);
    std::cout << "Deserialized data2: " << deserializedData2->num << std::endl;

    return 0;
}

/*
reinterpret_cast — это оператор приведения типов в C++, который позволяет осуществлять приведение типов на уровне битового представления.
Этот оператор выполняет небезопасное приведение типов, 
преобразуя один тип в другой без каких-либо проверок или гарантии, что результат будет логически правильным.

Зачем нужен reinterpret_cast?
reinterpret_cast используется в случае, когда вы хотите провести приведение типов, которое не является логически совместимым,
 и оно не будет проверяться компилятором или временем выполнения. В отличие от других операторов приведения, 
 таких как static_cast или dynamic_cast, reinterpret_cast не заботится о том, являются ли типы совместимыми. 
 Он просто выполняет преобразование на уровне памяти.

В основном, reinterpret_cast применяется в низкоуровневом программировании, например, для:

Манипуляций с указателями и адресами.
Преобразования указателей между различными типами, когда вы знаете, что это безопасно (например, 
указатели на разные структуры данных, но с совместимыми представлениями в памяти).
Реализации некоторых алгоритмов и оптимизаций, требующих прямого контроля над памятью.
Особенности reinterpret_cast:
Безопасность: Он является небезопасным. Вы должны быть уверены, что преобразование имеет смысл, так как оно 
может привести к неопределенному поведению, если вы пытаетесь интерпретировать данные как другие типы, которые не имеют совместимую структуру.
Не проверяет совместимость типов: reinterpret_cast не проверяет, совместимы ли типы, как это делает static_cast. 
Он не проводит никаких проверок, а просто выполняет побитовое преобразование.
*/