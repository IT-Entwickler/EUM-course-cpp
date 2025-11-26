#include <iostream> 
#include <limits> 
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision; 

int main() {   

    int number;
    
    while (true) {
        std::cout << "Введите число (при вводе 0 программа прекратит работу): " << std::endl;

        while (!(std::cin >> number)) {
            std::cout << "Ошибка. Введите целое число: " << std::endl;
            std::cin.clear(); // Сбрасываем флаг ошибки 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очищаем буфер 
        }

        // Проверяем, не введен ли 0 для выхода
        if (number == 0) {
            std::cout << "Программа завершила работу." << std::endl;
            break;
        }

        if (number < 0) {
            std::cout << "Факториал определён только для неотрицательных чисел." << std::endl;
            continue; // Переходим к следующей итерации цикла
        }

        cpp_int factorial = 1;

        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }

        std::cout << "!" << number << " = " << factorial << std::endl;
    }

    return 0;    
}