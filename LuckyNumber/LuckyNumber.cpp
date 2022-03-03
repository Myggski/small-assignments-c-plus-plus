#include <iostream>

bool is_lucky(int number);

int main()
{
    std::cout << "Should return 1 because it's lucky: " << is_lucky(12345) << "\n";
    std::cout << "Should return 1 because it's lucky: " << is_lucky(5321) << "\n";
    std::cout << "Should return 1 because it's lucky: " << is_lucky(698132) << "\n";
    std::cout << "Should return 0 because it's not lucky: " << is_lucky(666) << "\n";
    std::cout << "Should return 0 because it's not lucky: " << is_lucky(1337) << "\n";
    std::cout << "Should return 0 because it's not lucky: " << is_lucky(11223344) << "\n";
}

bool is_lucky(int number) {
    constexpr int MAX_NUMBER_OF_DIGITS_IN_INT = { 10 };
    char seen[MAX_NUMBER_OF_DIGITS_IN_INT] = { 0 };

    while (number) {
        const int digit = number % 10;

        number /= 10;

        // 0 = number doesn't exist
        // > 0 = number does already exist in array
        if (seen[digit]++) {
            return false;
        }
    }

    return true;
}