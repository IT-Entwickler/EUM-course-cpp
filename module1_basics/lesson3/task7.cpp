#include <iostream>
#include <string>
#include <cctype> // для std::isdigit

int main()
{
    std::string input;
    int number;

    std::cout << "Введите число: ";

    std::cin >> input;

    // Проверка что все символы - цифры с помощью std::isdigit
    for (char c : input)
    {
        if (!std::isdigit(c))
        {
            std::cout << "Ошибка. Введите только цифры." << std::endl;
            return 1;
        }
    }

    // Проверка что число не пустое
    if (input.empty())
    {
        std::cout << "Ошибка. Введите число." << std::endl;
        return 1;
    }

    // Преобразование строки в число
    number = std::stoi(input);
    bool isPalindrome = true;

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
    isPalindrome = (number == reversedNumber);

    // Вывод результата
    if (isPalindrome)
    {
        std::cout << "Число " << number << " является палиндромом." << std::endl;
    }
    else
    {
        std::cout << "Число " << number << " не является палиндромом." << std::endl;
    }

    return 0;
}