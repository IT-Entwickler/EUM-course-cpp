#include <iostream> 
#include <limits> 
#include <boost/multiprecision/cpp_int.hpp>

int main() {
    using namespace boost::multiprecision;    
    int number;
    std::cout << "Введите число: " << std::endl;

    while (!(std::cin >> number)) {
        std::cout << "Ошибка. Введите целое число: " << std::endl;
        std::cin.clear(); // Сбрасываем флаг ошибки 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очищаем буфер 
    }

    if (number < 0) {
        std::cout << "Факториал определён только для неотрицательных чисел." << std::endl;
        return 1;
    }

    cpp_int factorial = 1;

    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    std::cout << number << "! = " << factorial << std::endl;

    return 0;    
}