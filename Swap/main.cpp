#include <iostream>

void swap_pointers(int* numberA, int* numberB);
void swap_references(int& numberA, int& numberB);

int main() {
	int numberA{ 3 };
	int numberB{ 7 };

	std::swap(numberA, numberB);

	std::cout << "Swapped with std::swap - " << "NumberA: " << numberA << " NumberB: " << numberB << std::endl;

	swap_pointers(&numberA, &numberB);

	std::cout << "Swapped with pointers - " << "NumberA: " << numberA << " NumberB: " << numberB << std::endl;

	swap_references(numberA, numberB);

	std::cout << "Swapped with references - " << "NumberA: " << numberA << " NumberB: " << numberB << std::endl;

	return 0;
}

void swap_pointers(int* numberA, int* numberB) {
	*numberA = *numberA + *numberB;
	*numberB = *numberA - *numberB;
	*numberA = *numberA - *numberB;
}

void swap_references(int& numberA, int& numberB) {
	numberA = numberA + numberB;
	numberB = numberA - numberB;
	numberA = numberA - numberB;
}