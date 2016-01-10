// Write a program that reads several transactions 
// and counts how many transactions occur for each ISBN.

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item currTransaction, transaction;

	if (std::cin >> currTransaction)
	{
		int count = 1; // init counter

		// keep reeding transactions
		while (std::cin >> transaction)
		{
			if (transaction == currTransaction)
				count++;
			else
			{
				std::cout << "Transaction " << currTransaction.isbn()
						  << " occured " << count << " times" << std::endl;

				count = 1;
				currTransaction = transaction;
			}
		}

		// last transaction
		std::cout << "Transaction " << currTransaction.isbn()
				  << " occured " << count << " times" << std::endl;
	}
	else
	{
		std::cout << "Wrong input" << std::endl;
		return -1;
	}

	return 0;
}