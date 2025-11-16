#include <iostream>

int main() {
    int number;
    std::cout << "Введите переменную: ";
    std::cin >> number;

    if (number < 0) {
        number = -number;
    }

    int product = 1; // Начальное значение произведения

    bool hasEvenDigits = false; // Флаг для проверки наличия четных цифр

    if (number == 0) {
        product = 0;
        hasEvenDigits = true;
    } else {
        int temp = number;
        while (temp > 0) {
            int digit = temp % 10; // Получаем последнюю цифру
            if (digit % 2 == 0) { // Проверяем, четная ли цифра
                product *= digit;
                hasEvenDigits = true;
            }
            temp /= 10; // Убираем последнюю цифру
        }
    }

    std::cout << "Произведение чётных цифр в числе: ";
    if (!hasEvenDigits) {
        std::cout << "Нет четных цифр.";
        
    } else {
        std::cout << product;
    }
    std::cout << std::endl;

    return 0;
}