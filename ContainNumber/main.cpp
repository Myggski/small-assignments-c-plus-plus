#include <iostream>

bool containsDigit(const int& numberToSearchIn, const int& digitToFind);

int main()
{
    std::cout << containsDigit(12345, 6);
}

bool containsDigit(const int& numberToSearchIn, const int& digitToFind) {
    int number = numberToSearchIn;

    while (number)
    {
        if (number % 10 == digitToFind)
        {
            return true;
        }

        number /= 10;
    }

    return false;
}

