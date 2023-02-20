#include <iostream>
#include <cmath>

bool check_prime(int i) {
	int tmp;
	tmp = std::sqrt(i);
	if (tmp == 1 && i != 1) {
		return true;
	}
	if (i%2) {	
		for (int j = 2; j <= tmp; j++) {
			if (!(i%j))
				return false;
			if (j == tmp) 
				return true;
		}
	}
    return 0;
}

int main() {
	int t;
	std::cin >> t;

	while(t--) {
		int n;
		std::cin >> n;

		for (int i = n / 2; i >= 2; i--) {
			if (check_prime(i) && check_prime(n - i)) {
				std::cout << i << " " << n - i << '\n';
				break;
			}
		}
	}
}