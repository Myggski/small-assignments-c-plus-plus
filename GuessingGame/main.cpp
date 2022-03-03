#include <iostream>

void guess();
void try_guess(int guessingNumber);
void set_guessing_number(int& guessingNumber);
void get_value(int& value, std::string label);
int get_input();
int get_random_number(int minNumber, int maxNumber);
void validate_min_max(int& minNumber, int&maxNumber);

int main()
{
    int continueInput{ 1 };

    while (continueInput != 0) {
        if (continueInput == 1) {
            guess();
        }

        get_value(continueInput, "Want to play again? Press 1 to play again, play 0 to quit: ");
    }

    return 0;
}

void guess() {
    int guessingNumber{};
    std::system("cls");

    set_guessing_number(guessingNumber);
    try_guess(guessingNumber);

    std::cout << "Winner winner chicken dinner, you won the game!" << std::endl;
}

void try_guess(int guessingNumber) {
    int guessedNumber{};

    while (guessedNumber != guessingNumber) {
        get_value(guessedNumber, "Guess a number: ");

        if (guessedNumber != guessingNumber) {
            std::cout << "You guessed wrong. Try again!" << std::endl;
        }
    }
}

void set_guessing_number(int& guessingNumber) {
    int minNumber{};
    int maxNumber{};

    get_value(minNumber, "Set minimum guessing number: ");
    get_value(maxNumber, "Set maximum guessing number: ");

    validate_min_max(minNumber, maxNumber);

    guessingNumber = get_random_number(minNumber, maxNumber);
}

void get_value(int& value, std::string label) {
    std::cout << label;
    value = get_input();
}

int get_input() {
    int inputvalue = 0;

    while (!(std::cin >> inputvalue)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Try again with a digit: ";
    }

    return inputvalue;
}

int get_random_number(int minNumber, int maxNumber) {
    return rand() % (maxNumber - minNumber + 1) + minNumber;
}

void validate_min_max(int& minNumber, int& maxNumber) {
    int* myHeap = new int{ 3 };
    int& myRef = *myHeap;

    int& myNewRef = *(new int{ 3 });

    delete &myNewRef;

    while (minNumber >= maxNumber) {
        std::cout << "The maximum number(" << maxNumber << ") neeeds to be higher than the minimum number(" << minNumber << ").\n Set maximum guessing number: ";
        maxNumber = get_input();
    }
}