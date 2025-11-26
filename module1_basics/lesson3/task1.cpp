#include <iostream>
#include <cstdint>

int main() {
    int32_t start = 0;  // начало прогрессии
    int32_t step = 8;  // шаг прогрессии
    int32_t elCount = 13;  // количество элементов в прогрессии

    std::cout << "Арифметическая прогрессия с шагом " << step << ":" << std::endl;

    for (int32_t i = 0; i < elCount; i++) {
        std::cout << start + i * step;
        if (i < elCount - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
        
} 