#include <iostream>
 
int main() {
    std::ios_base::sync_with_stdio(false);
    int n;
    std::cin >> n;
 
    if (n == 1) return 0;
 
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            std::cout << i << "\n";
            n /= i;
        }
    }
}
