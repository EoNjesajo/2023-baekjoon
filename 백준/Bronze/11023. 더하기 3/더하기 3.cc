#include <iostream>
#include <string>

int main() {
    int n;
    int ans = 0;
    while (std::cin >> n) {
        ans += n;
    }
    std::cout << ans;
}