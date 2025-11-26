#include <iostream>
#include <cstdint>

int main() {
    const int32_t start = -90;  // начало прогрессии
    const int32_t step = 14;  // шаг прогрессии
    const int32_t elCount = 14;  // количество элементов в прогрессии
    
    std::cout << "Арифметическая прогрессия с шагом " << step << ":" << std::endl;
    
    for (int32_t i = 0; i < elCount; i++) {
        std::cout << start + i * step;
        if (i < elCount - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;

} 
