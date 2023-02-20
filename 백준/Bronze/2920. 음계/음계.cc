#include <iostream>

int main()
{
	int input[8] = { 0, };
	int asCount = 0, desCount = 0;

	for (int i = 0; i < 8; i++)
	{
		std::cin >> input[i];
	}

	for (int i = 0; i < 7; i++)
	{
		if (input[i] < input[i + 1])
			asCount++;
		else
			desCount++;
	}

	if (asCount == 7)
		std::cout << "ascending";
	else if (desCount == 7)
		std::cout << "descending";
	else
		std::cout << "mixed";
	
}