#include <iostream>

void print_value(int valueToPrint);
void print_iteratively(int numberOfElements);
void print_recursive(unsigned int numberOfElementsToPrint, int firstNumber = 0, int secondNumber = 1, unsigned int index = 0);

int main()
{
	print_iteratively(10);
	std::cout << "\n";
	print_recursive(10);
}

void print_value(int valueToPrint)
{
	std::cout << valueToPrint << " ";
}

void print_iteratively(int numberOfElementsToPrint)
{
	int valueToPrint{ 0 }, firstNumber{ 0 }, secondNumber{ 1 };

	if (numberOfElementsToPrint >= 1)
	{
		print_value(firstNumber);
	}

	if (numberOfElementsToPrint >= 2)
	{
		print_value(secondNumber);
	}

	for(int i = 2; i < numberOfElementsToPrint; i++)
	{
		valueToPrint = firstNumber + secondNumber;
		print_value(valueToPrint);
		firstNumber = secondNumber;
		secondNumber = valueToPrint;
	}
}

void print_recursive(unsigned int numberOfElementsToPrint, int firstNumber, int secondNumber, unsigned int index)
{
	if (index < 2)
	{
		print_value(index);
	} else if (index < numberOfElementsToPrint)
	{
		const int numberToPrint = firstNumber + secondNumber;

		print_value(numberToPrint);
		firstNumber = secondNumber;
		secondNumber = numberToPrint;
	}

	print_recursive(numberOfElementsToPrint, firstNumber, secondNumber, ++index);
}