#include <iostream>

bool is_even(int number);

int main()
{
    int number{ 3 };
    bool isEven{ is_even(number) };
    std::string evenOdd{ isEven ? "even" : "odd" };

    std::cout << number << " is an " << evenOdd << " number" << std::endl;

    return 0;
}

bool is_even(int number) {
    return number % 2 == 0;
}