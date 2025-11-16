#include <iostream>
#include <string>
#include <cctype> // для std::isdigit

int main()
{
    std::string input;
    int number;

    std::cout << "Введите 8-значное число: ";

    std::cin >> input;

    if (input.length() != 8)
    {
        std::cout << "Ошибка! Число должно быть 8-значным." << std::endl;
        return 1;
    }

    // Проверка что все символы - цифры с помощью std::isdigit
    for (char c : input)
    {
        if (!std::isdigit(c))
        {
            std::cout << "Ошибка! Введите только цифры." << std::endl;
            return 1;
        }
    }

    // Преобразование строки в число
    number = std::stoi(input);

    // Проверка на палиндром с использованием целочисленных операций

    bool isPalindrome = true;
    int originalNumber = number;
    int reversedNumber = 0;
    int temp = number;

    // Переворачиваем число с помощью целочисленных операций
    while (temp > 0)
    {
        int digit = temp % 10;                        // получаем последнюю цифру
        reversedNumber = reversedNumber * 10 + digit; // добавляем цифру к перевернутому числу
        temp = temp / 10;                             // удаляем последнюю цифру
    }

    // Сравниваем исходное число с перевернутым
    isPalindrome = (originalNumber == reversedNumber);

    // Вывод результата
    if (isPalindrome)
    {
        std::cout << "Число " << originalNumber << " является палиндромом!" << std::endl;
    }
    else
    {
        std::cout << "Число " << originalNumber << " не является палиндромом." << std::endl;
    }

    return 0;
}