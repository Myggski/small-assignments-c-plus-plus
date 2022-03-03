#include <iostream>

float celcius_to_fahrenheit(float celcius);
int celcius_to_fahrenheit_int(int celcius);

int main()
{
    std::cout << celcius_to_fahrenheit(36) << std::endl;
    std::cout << celcius_to_fahrenheit_int(36) << std::endl;

    return 0;
}

// Returns only quotient and the reminder is discarded.
int celcius_to_fahrenheit_int(int celcius) {
    return celcius * 9 / 5 + 32;
}

float celcius_to_fahrenheit(float celcius) {
    return celcius * 9 / 5 + 32;
}