#include <iostream>
#include <string>

int main()
{

    std::string number;

    std::cout << "Введите переменную:" << std::endl;
    std::cin >> number;

    for (int i = number.length() - 1; i >= 0; i--)

    {
        std::cout << number[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}