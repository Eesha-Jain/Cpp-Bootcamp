#include <iostream>

using namespace std;

int main() {

    int nums [] = {1, 2, 3, 4};

    string name [] = {"bob", "tom", "sally"};
    int num [5];

    name[0] = "lilly\n\n";

    cout << name[0];

    for (int i = 0; i < sizeof(name); i++) {
        cout << name[i] << ", ";
    }

    return 0;
}