
#include <iostream>
#include <string>

int main() {
    std::string playerName;

    std::cout << "=== Text Arcade Game ===\n";
    std::cout << "Enter your name: ";
    std::getline(std::cin, playerName);

    std::cout << "Welcome, " << playerName << "!\n";
    std::cout << "The game is starting...\n";

    return 0;
}
