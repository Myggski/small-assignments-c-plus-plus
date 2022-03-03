#include <iostream>
#include <algorithm>

bool isArithmetic(int arr[], const int& arrLength);

int main() {
	int* arthmeticArrWith0 = new int[0]{ };
	int* arthmeticArrWith1 = new int[1]{ 10 };
	int* arthmeticArrWith2 = new int[2]{ 10, 5 };
	int* arthmeticArrWith3 = new int[3]{ 10, 5, 15 };
	int* arthmeticArrWith4 = new int[4]{ 10, 5, 15, 20 };

	int* notArthmeticArrWith3 = new int[3]{ 1, 7, 2 };
	int* notArthmeticArrWith4 = new int[4]{ 6, 3, 9, 13 };

	std::cout << "Should return 1/true: " << isArithmetic(arthmeticArrWith0, 0) << std::endl;
	std::cout << "Should return 1/true: " << isArithmetic(arthmeticArrWith1, 1) << std::endl;
	std::cout << "Should return 1/true: " << isArithmetic(arthmeticArrWith2, 2) << std::endl;
	std::cout << "Should return 1/true: " << isArithmetic(arthmeticArrWith3, 3) << std::endl;
	std::cout << "Should return 1/true: " << isArithmetic(arthmeticArrWith4, 4) << std::endl;

	std::cout << "Should return 0/false: " << isArithmetic(notArthmeticArrWith3, 3) << std::endl;
	std::cout << "Should return 0/false: " << isArithmetic(notArthmeticArrWith4, 4) << std::endl;

	return 0;
}

bool isArithmetic(int arr[], const int& arrLength) {
	if (arrLength < 3) {
		return true;
	}

	std::sort(arr, arr + arrLength);

	int distance{ arr[1] - arr[0] };
	for (int i = 2; i < arrLength; i++) {
		if (arr[i] - arr[i - 1] != distance) {
			return false;
		}
	}

	return true;
}