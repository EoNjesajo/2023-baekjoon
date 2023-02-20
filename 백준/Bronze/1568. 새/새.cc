#include <iostream>

int main()
{
    int N;
	std::cin >> N;
	int sing = 1, count = 0;
	while (N != 0) {
		if (N < sing)   
			sing = 1;
		N -= sing;
		sing++;
		count++;
	}
	std::cout << count << "\n";
}