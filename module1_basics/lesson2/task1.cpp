#include <iostream>
#include <string>

int main()
{
    std::string name;
    int score = 0;
    int answer;

    std::cout << "=== ТЕСТ: Кто ты из супергероев? ===\n";
    std::cout << "Введите имя: ";
    std::getline(std::cin, name);

    std::cout << "\nПривет, " << name << "! Ответь на 2 вопроса:\n";

    // Вопрос 1
    std::cout << "\n1. Твоя суперспособность?\n";
    std::cout << "1) Паутина\n2) Технологии\n3) Сила\n4) Суперсила\n";
    std::cout << "Ответ (1-4): ";

    while (!(std::cin >> answer) || answer < 1 || answer > 4)
    {
        std::cout << "Ошибка! Введите 1-4: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }
    score += answer * 25;

    // Вопрос 2
    std::cout << "\n2. Твоё отношение к врагам?\n";
    std::cout << "1) Перевоспитать\n2) Обезвредить\n3) Победить\n4) Заморозить\n";

    std::cout << "Ответ (1-4): ";

    while (!(std::cin >> answer) || answer < 1 || answer > 4)
    {
        std::cout << "Ошибка! Введите 1-4: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }
    score += answer * 25;

    std::cout << "\n=== РЕЗУЛЬТАТ ===\n";

    if (score <= 75)
        std::cout << name << ", ты - Человек-паук!\n";
    else if (score <= 125)
        std::cout << name << ", ты - Бэтмен!\n";
    else if (score <= 175)
        std::cout << name << ", ты - Халк!\n";
    else
        std::cout << name << ", ты - Доктор Стрэндж!\n";

    std::cout << "Спасибо за тест!\n";
    return 0;
}