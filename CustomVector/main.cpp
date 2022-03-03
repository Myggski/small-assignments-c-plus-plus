#include <iostream>
#include "Vector.h"

int main()
{
	Vector<std::string> myListOfStrings;

	myListOfStrings.push_back("This is a long string that contains text and such 1");
	myListOfStrings.push_back("This is a long string that contains text and such 2");
	myListOfStrings.push_back("This is a long string that contains text and such 3");
	myListOfStrings.push_back("This is a long string that contains text and such 4");
	myListOfStrings.push_back("This is a long string that contains text and such 5");

	std::cout << myListOfStrings.size() << std::endl;
	std::cout << myListOfStrings.pop_back() << std::endl;

	return 0;
}