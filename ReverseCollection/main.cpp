#include <iostream>

std::string reverse_text(std::string text);

int main()
{
    std::string myString = "Hello motherfucker";

    std::cout << reverse_text(myString) << std::endl;
}

std::string reverse_text(std::string text) {
    std::string temp = "";
    size_t length = text.length();

    for (size_t i = length - 1; i >= 0; i--) {
        temp += text[i];
    }

    return temp;
}