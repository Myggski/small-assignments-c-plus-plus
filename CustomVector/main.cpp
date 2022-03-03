#include <iostream>
#include "Vector.h"

int main()
{
	/*Vector<int> myVector;

	myVector.push_back(13);
	myVector.push_back(3);
	myVector.push_back(7);*/


	Vector<Vector<int>> derp;
	Vector<int> snerp;
	snerp.push_back(10);

	derp = Vector<Vector<int>>();

	derp.push_back(snerp);
	derp.push_back(snerp);
	derp.push_back(snerp);
	derp.push_back(snerp);
	derp.push_back(snerp);

	int size = derp.size();
	size = 10;


	std::cout << derp.size() << std::endl;
	std::cout << &derp.size() << std::endl;
	std::cout << &size << std::endl;

	return 0;
}