#include <iostream>
#include <string>

int main() {
    std::string playerName;
    int choice = 0;

    std::cout << "=== Аркадная игра ===\n";
    std::cout << "Введите имя: ";
    std::getline(std::cin, playerName);

    std::cout << "\nПривет, " << playerName << "!\n";
    std::cout << "1. Начать игру\n";
    std::cout << "2. Выход\n";
    std::cout << "Выберите действие: ";

    if (!(std::cin >> choice)) {
        std::cout << "Ошибка: необходимо ввести число.\n";
        return 0;
    }

    if (choice == 1) {
        std::cout << "Запуск игры...\n";
    } else if (choice == 2) {
        std::cout << "До свидания, " << playerName << "!\n";
    } else {
        std::cout << "Неверный выбор.\n";
    }

    return 0;
}