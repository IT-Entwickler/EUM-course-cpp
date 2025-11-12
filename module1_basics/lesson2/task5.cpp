#include <iostream>

int main()
{
    int n;
    std::cout << "Введите число: ";
    std::cin >> n;

    if (n < 0)
        n = -n;

    int count = 0;

    std::cout << "Для числа " << n << " нечетные цифры: ";

    for (int t = n; t > 0; t /= 10)
    {
        int d = t % 10;
        if (d % 2)
        {
            if (count++)
                std::cout << ", ";
            std::cout << d;
        }
    }

    std::cout << " - всего " << count << " нечётных разряда." << std::endl;
    return 0;
}