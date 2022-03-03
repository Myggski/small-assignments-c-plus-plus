#include <iostream>

void print_last_digit(int number);
void print_digits_separately(int number);
void print_digits_separately_reverse(int number);
int get_number_of_digits(int number);

int main()
{
    int number{ 137 };

    print_last_digit(number);
    print_digits_separately(number);
    print_digits_separately_reverse(number);
}

void print_last_digit(int number) {
    std::cout << number % 10 << std::endl;
}

void print_digits_separately(int number)
{
    while (number > 0) {
	    const int numberOfDigits{ static_cast<int>(std::pow(10, get_number_of_digits(number))) };
        std::cout << number / numberOfDigits << " ";
        number %= numberOfDigits;
    }

    std::cout << std::endl;
}

void print_digits_separately_reverse(int number)
{
    while (number > 0)
    {
        int digit{ number % 10 };
        number /= 10;
        std::cout << digit << " ";
    }

    std::cout << std::endl;
}

int get_number_of_digits(int number)
{
    int numberOfDigits{ 0 };

    while (number >= 10)
    {
        number = number / 10;
        ++numberOfDigits;
    }

    return numberOfDigits;
}