#include <iostream>

int main() {
	int n, result = 0;
	int temp, count = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> temp;
		for (int i = 1; i <= temp; i++) {
			if (temp%i == 0)
				count++;
		}
		if (count == 2)
			result++;
		count = 0;
	}
	std::cout << result << '\n';
}