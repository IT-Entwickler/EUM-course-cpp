#include <iostream>
#include <cstdint> 

int main() {
    std::cout << "Cube table:" << std::endl;
    std::cout << "------------------------" << std::endl;

    for (int32_t i = 1; i <= 10; i++) {
        int32_t cube = i * i * i;
        std::cout << cube; 

        if (i < 10) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}