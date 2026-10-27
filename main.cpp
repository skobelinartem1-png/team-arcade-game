#include <iostream>
#include <string>

int main() {
    std::string playerName;
    int answer = 0;

    std::cout << "=== Аркадная игра ===\n";
    std::cout << "Введите имя: ";
    std::getline(std::cin, playerName);

    std::cout << "\nПривет, " << playerName << "!\n";
    std::cout << "Сколько будет 5 + 3?\n";
    std::cout << "1. 7\n";
    std::cout << "2. 8\n";
    std::cout << "3. 9\n";
    std::cout << "Ваш ответ (1-3): ";

    if (!(std::cin >> answer)) {
        std::cout << "Ошибка: необходимо ввести число.\n";
        return 0;
    }

    if (answer == 2) {
        std::cout << "Правильно! Вы выиграли.\n";
    } else if (answer >= 1 && answer <= 3) {
        std::cout << "Неправильный ответ.\n";
    } else {
        std::cout << "Неверный вариант ответа.\n";
    }

    return 0;
}