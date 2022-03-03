#include <algorithm>
#include <iostream>
#include <unordered_map>

void print_characters(std::string str);
void store_character(std::unordered_map<char, int>& characterMap, char characterKey);

int main()
{
    print_characters("Hello there how are you?");
}

void print_characters(std::string str)
{
    if (!str.empty())
    {
        std::cout << "The string: " << str << "\n";

        str.erase(remove_if(str.begin(), str.end(), isspace), str.end());
        std::unordered_map<char, int> characterMap;

        for (const char character : str)
        {
            store_character(characterMap, character);
        }

        for (const auto& item : characterMap)
        {
            std::cout << item.first << ": " << item.second << "\n";
        }

    } else
    {
        std::cout << "Please try with a string with characters";
    }
}

void store_character(std::unordered_map<char, int>& characterMap, char characterKey)
{
    characterKey = static_cast<char>(toupper(characterKey));
    if (characterMap.count(characterKey))
    {
        characterMap.at(characterKey) += 1;
    }
    else
    {
        characterMap.insert({ characterKey, 1 });
    }
}
