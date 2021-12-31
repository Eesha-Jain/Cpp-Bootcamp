#include <iostream>

int main() {

    std::string answer = "";
    int count = 0;

    while (!(answer == "goose")) {
        std::cin >> answer;

        if (answer == "duck") {
            count++;
        } else if (!(answer == "goose")) {
            std::cout << "Invalid input: not duck or goose...\n";
        }
    }

    if (count >= 2) {
        std::cout << "Yay, you played correctly.";
    } else {
        std::cout << "You played incorrectly. You have to say duck 2 times before you say goose.";
    }

    return 0;
}