#include <iostream>

using namespace std;

void helloworld() {
    cout << "Hello, World!\n";
}

int setToFive() {
    return 5;
}

int addition(int a, int b) {
    return a + b;
}

int main() {

    int a = setToFive();
    int sum = addition(7, 3);

    cout << a;
    cout << sum;

    helloworld();
    helloworld();
    helloworld();

    return 0;
}