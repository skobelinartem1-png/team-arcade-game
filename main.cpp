
#include <iostream>
#include <string>

int main() {
    std::string playerName;
    int choice = 0;
    int answer = 0;

    std::cout << "=== Text Arcade Game ===\n";
    std::cout << "Enter your name: ";
    std::getline(std::cin, playerName);

    std::cout << "\nWelcome, " << playerName << "!\n";
    std::cout << "What is 5 + 3?\n";
    std::cout << "1. 7\n";
    std::cout << "2. 8\n";
    std::cout << "3. 9\n";
    std::cout << "Your answer: ";
    std::cin >> answer;

    if (answer == 2) {
        std::cout << "Correct! You win!\n";
    } else {
        std::cout << "Incorrect answer. Try again next time!\n";
    }

    return 0;
}