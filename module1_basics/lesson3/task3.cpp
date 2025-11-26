#include <iostream>
#include <cstdint>


int main() {
    const int32_t start = 100;  // начало прогрессии
    
    std::cout << "Арифметическая прогрессия:" << std::endl;

    for (int32_t i = start; i >= 1; i--) {
        std::cout << i;
        if (i > 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}