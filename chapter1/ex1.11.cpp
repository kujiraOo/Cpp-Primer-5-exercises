#include <iostream>

int main()
{
	int val1 = 0, val2 = 0; // hold user's input

	std::cout << "Enter two numbers" << std::endl;

	// prompt user for two numbers
	std::cin >> val1 >> val2;

	// print all numbers in the range specified by user
	while (val1 <= val2)
	{
		std::cout << val1 << std::endl;

		++val1;
	}

	return 0;
}