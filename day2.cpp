/*This is a multi line comment
and this goes for multiple lines
and more lines*/

#include <iostream>

int main() {

    int a = 1;
    double b = 3.14;
    char c = 'c';
    std::string d = "hello";
    bool e = false;

    int casted = (int) b;
    int length_of_d = d.length();
    char a_char_in_d = d[2];

    std::string story = "blah blah\nblah \"blah\"";

    int userinput;
    std::string name;

    std::cout << "Enter a number: ";
    std::cin >> userinput;
    std::cout << "Your input is " << userinput;

    //the "cin" won't take anything after the first space
    std::cout << "Enter your first name: ";
    std::cin >> name;
    std::cout << "Hi there " << name;

    std::cout << "Enter your ENTIRE name: ";
    getline(std::cin, name);

    std::cout << "Hi there " << name;


    int num = 3;
    int num2 = 4;

    num += 3;
    num++;

    num -= 2;
    num--;

    num *= 2;
    num /= 2;

    num2 = num + 5;

    return 0;
}