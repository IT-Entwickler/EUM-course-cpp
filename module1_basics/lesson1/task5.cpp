#include <iostream>
#include <iomanip>
#include <cmath>

int main()

{
    double a, b;
    int operation;

    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> a >> b;

    std::cout << "What operation do you want to perform?" << std::endl;
    std::cout << "1 - Addition" << std::endl;
    std::cout << "2 - Subtraction" << std::endl;
    std::cout << "3 - Multiplication" << std::endl;
    std::cout << "4 - Division" << std::endl;
    std::cout << "5 - Exponentiation" << std::endl;
    std::cout << "6 - Logarithm of a number a to the base b" << std::endl;

    if (!(std::cin >> operation))
    {
        std::cout << "You entered the number incorrectly." << std::endl;
        return 1;
    }

    // Setting the output precision to 5 decimal places
    std::cout << std::fixed << std::setprecision(5);

    switch (operation)
    {
    case 1:

        std::cout << "The result of the action is " << a + b << std::endl;
        break;
    case 2:
        std::cout << "The result of the action is " << a - b << std::endl;
        break;
    case 3:
        std::cout << "The result of the action is " << a * b << std::endl;
        break;
    case 4:
        if (b != 0)
        {
            std::cout << "The result of the action is " << a / b << std::endl;
        }
        else
        {
            std::cout << "Error: division by zero." << std::endl;
        }
        break;
    case 5:
        std::cout << "The result of the action is " << pow(a, b) << std::endl;
        break;
    case 6:
        if (b > 0 && b != 1 && a > 0)
        {
            std::cout << "The result of the action is " << log(a) / log(b) << std::endl;
        }
        else
        {
            std::cout << "Error: incorrect values for logarithm." << std::endl;
            std::cout << "Base must be > 0 and != 1, number must be > 0." << std::endl;
        }
        break;

    default:
        std::cout << "You entered the number incorrectly." << std::endl;
        break;
    }

    return 0;
}
