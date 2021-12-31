//CPP Resource: http://www.cplusplus.com/reference/algorithm/sort/

#include <iostream>
#include <vector>

void search(std::vector<int> arr, int find) {
	int first = 0;
	int last = arr.size() - 1;
		
	int mid = (int) ((first + last) / 2);
		
	while (first <= last) {
		if (arr[mid] < find) {
			first = mid + 1;
		} else if (arr[mid] == find) {
			std::cout << "We found the value " << find << " at index " << (mid + 1) << ".";
			return;
		} else {
			last = mid - 1;
		}
			
		mid = (first + last)/2;
	}
		
	if (first > last) {
		std::cout << "Sorry, we didn't find " << find << " in this array.";
        return;
	}
}

int main() {

    std::vector<int> arr = {1, 2, 4, 7, 8, 12, 14, 15, 17, 18, 19, 24, 27, 31, 41, 53, 58, 62, 63, 85, 93, 95};

    int num;

    std::cout << "Enter the number you want to find: ";
    std::cin >> num;

    std::cout << "\n";
    search (arr, num);

    return 0;
}