
#include "Array.hpp"

int main() {
    try {
        // 1️⃣ Создание пустого массива
        Array<int> emptyArray;
        std::cout << "Empty array size: " << emptyArray.size() << std::endl;

        // 2️⃣ Создание массива из 5 элементов (инициализированных по умолчанию)
        Array<int> intArray(5);
        std::cout << "intArray size: " << intArray.size() << std::endl;

        // 3️⃣ Заполняем массив значениями
        for (size_t i = 0; i < intArray.size(); i++) {
            intArray[i] = i * 10;
        }

        // 4️⃣ Выводим значения массива
        std::cout << "intArray elements: ";
        for (size_t i = 0; i < intArray.size(); i++) {
            std::cout << intArray[i] << " ";
        }
        std::cout << std::endl;

        // 5️⃣ Проверка конструктора копирования
        Array<int> copiedArray = intArray;
        std::cout << "Copied array: ";
        for (size_t i = 0; i < copiedArray.size(); i++) {
            std::cout << copiedArray[i] << " ";
        }
        std::cout << std::endl;

        // 6️⃣ Проверка оператора присваивания
        Array<int> assignedArray;
        assignedArray = intArray;
        std::cout << "Assigned array: ";
        for (size_t i = 0; i < assignedArray.size(); i++) {
            std::cout << assignedArray[i] << " ";
        }
        std::cout << std::endl;

        // 7️⃣ Проверка исключения (выход за границы массива)
        std::cout << "Trying to access out-of-bounds index..." << std::endl;
        std::cout << intArray[10] << std::endl; // Ошибка! Бросит исключение
        }
        catch (const std::exception& e)
        {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }
       // Тест  Массив сложных типов
        std::cout << "\n✅ Testing Array specific\n";
        Array<std::string> strArray(2);
        strArray[0] = "Hello";
        strArray[1] = "World";
        for (size_t i = 0; i < strArray.size(); i++) {
            std::cout << "strArray[" << i << "] = " << strArray[i] << "\n";
        }

    return 0;
}