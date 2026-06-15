#include "iter.hpp"

template <typename T>
void printElement(T& x) {
    std::cout << x << " ";
}

// Шаблонная функция, работающая с любым типом
template <typename T>
void doubleElement(T& x) {
    x *= 2;
}


int main() {
    // --- INT ---
    int arr[] = {1, 2, 3, 4, 5};
    size_t len = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original int array: ";
    iter(arr, len, printElement);
    std::cout << std::endl;

    iter(arr, len, doubleElement);
    std::cout << "Modified int array: ";
    iter(arr, len, printElement);
    std::cout << "\n------------------------\n";

    // --- FLOAT ---
    float floats[] = {1.1f, 2.2f, 3.3f};
    size_t lenF = sizeof(floats) / sizeof(floats[0]);

    std::cout << "Original float array: ";
    iter(floats, lenF, printElement);
    std::cout << std::endl;

    iter(floats, lenF, doubleElement);
    std::cout << "Modified float array: ";
    iter(floats, lenF, printElement);
    std::cout << "\n------------------------\n";
    return 0;
}

