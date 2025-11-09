#include <iostream>

int main()
{
    double x;

    std::cout << "Введите x: ";
    std::cin >> x;

    bool belongs = x > -12 && x < 0 || x == 1 || x >= 4 && x <= 8 || x > 12 && x <= 48;
    if (belongs)
    {

        std::cout << "Число " << x << " принадлежит указанным промежуткам" << std::endl;
    }
    else
    {
        std::cout << "Число " << x << " НЕ принадлежит указанным промежуткам" << std::endl;
    }

    return 0;
}
