#include <iostream>
#include <string>

int main()
{
    std::string number;

    std::cout << "Введите 8-значное число: ";
    std::cin >> number;

    if (number.length() != 8)
    {

        std::cout << "Ошибка! Число должно быть 8-значным." << std::endl;

        return 1;
    }

    for (char c : number)
    {
        if (c < '0' || c > '9')
        {
            std::cout << "Ошибка! Введите только цифры." << std::endl;
            return 1;
        }
    }

    // Проверка на палиндром
    bool isPalindrome = true;
    for (int i = 0; i < 4; i++)
    {
        if (number[i] != number[7 - i])
        {

            isPalindrome = false;
            break;
        }
    }

    // Вывод результата
    if (isPalindrome)
    {
        std::cout << "Число " << number << " является палиндромом!" << std::endl;
    }
    else
    {
        std::cout << "Число " << number << " не является палиндромом." << std::endl;
    }

    return 0;
}