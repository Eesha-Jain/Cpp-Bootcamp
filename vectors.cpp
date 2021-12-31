#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> arr;


    //Add an element to the end of the array
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);

    //Remove the element from the back
    arr.pop_back();

    //Remove all elements
    //arr.erase(arr.begin(), arr.end());

    //Remove certain
    arr.erase(arr.begin() + 2, arr.end() - 1);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ", ";
    }

    return 0;
}