#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item currItem, item;

	if (std::cin >> currItem)
	{
		Sales_item sum = currItem;

		while (std::cin >> item)
		{
			if (item.isbn() == currItem.isbn())
				sum += item;
			else
				std::cout << "The books must have the same ISBN. The book with ISBN " 
						  << item.isbn() << "has different one" << std::endl;
		}

		std::cout << sum << std::endl;
	}
	else
		std::cout << "Wrong input format" << std::endl;

	return 0;
}