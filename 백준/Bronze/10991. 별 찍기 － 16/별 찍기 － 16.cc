#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = i; j <= n - 1; j++)
		{
			std::cout << " ";
		}
		for (int j = 1; j <= i*2-1; j++)
		{
			if (j % 2 == 1)
				std::cout << "*";
			else
				std::cout << " ";
		}
		std::cout << "\n";
	}
}