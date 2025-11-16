#include <iostream>
#include <string>
#include <cctype> // для std::isdigit

int main()
{
    std::string input;
    int number;

    std::cout << "Введите число: ";
    std::cin >> input;
    // Проверка что все символы - цифры

    for (char c : input)
    {
        if (!std::isdigit(c))
        {
            std::cout << "Ошибка! Введите только цифры." << std::endl;
            return 1;
        }
    }

    // Преобразование строки в число (автоматически убирает незначащие нули)
    number = std::stoi(input);

    // Вывод цифр в обратном порядке с использованием целочисленных операций

    std::cout << "Цифры в обратном порядке: ";

    if (number == 0)
    {
        std::cout << "0";
    }

    else
    {
        int temp = number;
        while (temp > 0)
        {
            int digit = temp % 10;     // получаем последнюю цифру
            std::cout << digit << " "; // выводим цифру
            temp = temp / 10;          // удаляем последнюю цифру
        }
        
    }

    std::cout << std::endl;
    return 0;
}