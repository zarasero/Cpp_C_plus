/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:05:22 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/24 17:52:41 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

// Функция для замены всех вхождений строки s1 на строку s2 в строке line
std::string replace(std::string line, const std::string& s1, const std::string& s2)
{
    size_t pos = 0;  // Переменная для хранения позиции найденной подстроки
    while ((pos = line.find(s1, pos)) != std::string::npos)
    {
        // Вместо использования replace, мы создаём новую строку с заменой
        line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
        pos += s2.length();  // Сдвигаем позицию на длину замененной строки
    }
    return line;
}


int main(int argc, char** argv)
{
    // Проверка правильности ввода параметров
    if (argc != 4) {
        std::cerr << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];  // Имя файла
    std::string s1 = argv[2];  // Строка, которую заменяем
    std::string s2 = argv[3];  // Строка, на которую заменяем

    // Открытие входного файла
    std::ifstream inputFile(filename.c_str());
    if (!inputFile) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }

    // Создание выходного файла
    std::string outputFilename = filename + ".replace";  // Создаем имя выходного файла
    std::ofstream outputFile(outputFilename.c_str());
    if (!outputFile) {
        std::cerr << "Error: Could not create output file " << outputFilename << std::endl;
        return 1;
    }

    std::string line;
    // Чтение строк из файла и замена всех вхождений s1 на s2
    while (std::getline(inputFile, line)) {
        line = replace(line, s1, s2);  // Заменяем все вхождения
        outputFile << line << std::endl;  // Записываем измененную строку в выходной файл
    }

    // Закрытие файлов
    inputFile.close();
    outputFile.close();

    std::cout << "File successfully processed and saved as " << outputFilename << std::endl;

    return 0;
}

