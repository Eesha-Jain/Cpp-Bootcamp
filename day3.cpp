#include <iostream>

//This will allow you to use math functions
#include <cmath>


int main () {

    int num = 1;

    if (num == 1) {
        std::cout << "The value of num is equal to 1";
    } else if (num < 1) {
        std::cout << "The value of num is less than 1";
    } else {
        std::cout << "The value is not equal to 1";
    }

    //If num exists, than it is true
    //If num is null or doesn't exist, than it is false
    if (num) {
        std::cout << "\nNum exists";
    }

    std::cout << "\n";

    int a;
    std::cin >> a;

    switch(a) {
        case 1:
            std::cout << "one";
            break;
        case 2:
            std::cout << "two";
            break;
        case 3:
            std::cout << "three";
            break;
        case 4:
            std::cout << "four";
            break;
        case 5:
            std::cout << "five";
            break;
        case 6:
            std::cout << "six";
            break;
        case 7:
            std::cout << "seven";
            break;
        case 8:
            std::cout << "eight";
            break;
        case 9:
            std::cout << "nine";
            break;
        case 10:
            std::cout << "ten";
            break;
        default:
            std::cout << "Not a valid num from 1-10";
            break;
    }

    bool val = true;
    int b;

    std::cout << "\n";


    while (val == true) {
        std::cin >> b;
        std::cout << "\n" << b << std::endl;
        if (b == 0) {
            val = false;
        }
    }

    for (int i = 0; i < 10; i++) {
        std::cout << " " << i;
    }

    return 0;
}