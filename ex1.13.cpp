#include <iostream>

int main()
{
	// ex 1.9
	int sum = 0;

	for (int val = 50; val <= 100; ++val)
		sum += val;

	std::cout << "The sum of 50 to 100 inclusive is " << sum << std::endl;

	// ex 1.10
	for (int val = 10; val >= 0; --val)
		std::cout << val << std::endl;

	// ex 1.11
	int val1 = 0, val2 = 0; // hold user's input

	// prompt user for two numbers
	std::cout << "Enter two numbers" << std::endl;
	std::cin >> val1 >> val2;

	// print all numbers in the range specified by user
	for (; val1 <= val2; ++val1)
		std::cout << val1 << std::endl;

	return 0;
}