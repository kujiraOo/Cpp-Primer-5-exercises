// Write a program that reads several transactions 
// and counts how many transactions occur for each ISBN.

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item total; // variable to hold sum of transactions

	if (std::cin >> total)
	{
		Sales_item trans; // variable for next transaction
		// keep reeding transactions
		while (std::cin >> trans)
		{
			// if it's the same book
			if (trans.isbn() == total.isbn())
				total += trans; // update total
			else
			{
				// print results for the previous book
				std::cout << total << std::endl;
				total = trans; // total now refers to next book
			}
		}
		// print last transaction
		std::cout << total << std::endl;
	}
	else
	{
		std::cerr << "Wrong input" << std::endl;
		return -1;
	}

	return 0;
}