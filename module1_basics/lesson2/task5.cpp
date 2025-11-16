#include <iostream>
#include <cmath> 

int main() {
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;

    number = std::abs(number);  // используем std::abs для модуля числа

    int odd_digits_count = 0;
    std::cout << "Для числа " << number << " нечетные цифры: ";

    for (int temp = number; temp > 0; temp /= 10) {
        int digit = temp % 10;
        if (digit % 2) {
            if (odd_digits_count++) {
                std::cout << ", ";
            }
            std::cout << digit;
        }
    }

    std::cout << " - всего " << odd_digits_count << " нечётных разряда." << std::endl;

    return 0;
}