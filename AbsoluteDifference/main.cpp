#include <iostream>

int get_abs(int number);

int main()
{
    int numberA{ -6 };
    int numberB{ 4 };

    std::cout << "Number A = " << numberA << ", Number B = " << numberB << std::endl;
    std::cout << "The absolute difference is " << get_abs(numberA) + get_abs(numberB) << std::endl;

    return 0;
}

int get_abs(int number) {
    return number >= 0 ? number : number * -1;
}
