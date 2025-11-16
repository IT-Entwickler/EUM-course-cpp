#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string user_input;      
    std::cout << "Введите переменную: " << std::endl;
    std::cin >> user_input;
    
    for (char c : user_input) {
        if (!std::isdigit(c)) {
            std::cout << "Ошибка! Введите только цифры." << std::endl;
            
            return 1;
        }
    }
    
    // Преобразуем строку в число
    int number = std::stoi(user_input);
    int count = 0;
    int temp = number;
    
    // Считаем количество разрядов
    do {
        count++;
        temp = temp / 10;
    } while (temp != 0);
    
    std::cout << "В числе " << count << " разрядов." << std::endl;
    
    return 0;
}