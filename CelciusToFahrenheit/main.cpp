#include <iostream>

float celsius_to_fahrenheit(float celsius);
int celsius_to_fahrenheit_int(int celsius);

int main()
{
    std::cout << celsius_to_fahrenheit(36) << std::endl;
    std::cout << celsius_to_fahrenheit_int(36) << std::endl;

    return 0;
}

// Returns only quotient and the reminder is discarded.
int celsius_to_fahrenheit_int(const int celsius) {
    return celsius * 9 / 5 + 32;
}

float celsius_to_fahrenheit(const float celsius) {
    return celsius * 9 / 5 + 32;
}