#include <iostream>

int main() {

    int a;
    std::cin >> a;

    std::string answer = "";
    bool used = false;

    if (a % 3 == 0) {
        answer += "Fizz";
        used = true;
    }

    if (a % 5 == 0) {
        answer += "Buzz";
        used = true;
    }

    if (used == false) {
        answer += "None";
    }

    std::cout << a << ": " << answer << "\n";


    for (int i = 1; i <= 100; i++) {
        std::string answer = "";
        bool used = false;

        if (i % 3 == 0) {
            answer += "Fizz";
            used = true;
        }

        if (i % 5 == 0) {
            answer += "Buzz";
            used = true;
        }

        if (used == false) {
            answer += "None";
        }

        std::cout << i << ": " << answer << "\n";
    }

    return 0;
}