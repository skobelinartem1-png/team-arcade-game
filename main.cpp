#include <iostream>
#include <string>

int main() {
    std::string playerName;
    int choice = 0;

    std::cout << "=== Text Arcade Game ===\n";
    std::cout << "Enter your name: ";
    std::getline(std::cin, playerName);

    std::cout << "\nWelcome, " << playerName << "!\n";
    std::cout << "1. Start game\n";
    std::cout << "2. Exit\n";
    std::cout << "Choose an option: ";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Starting game...\n";
    } else if (choice == 2) {
        std::cout << "Goodbye, " << playerName << "!\n";
    } else {
        std::cout << "Invalid choice.\n";
    }

    return 0;
}