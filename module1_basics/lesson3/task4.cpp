#include <iostream>
#include <cstdint> 

int main() {
    std::cout << "Таблица умножения на 11:" << std::endl;
    std::cout << "------------------------" << std::endl;

    for (int16_t i = 1; i <= 10; i++) {
        std::cout << "11 x " << i << " = " << 11 * i << std::endl;
    }
    return 0;
}


