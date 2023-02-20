#include <iostream>
#include <stack>

int main() {
    int k, n;
    std::cin >> k;
    std::stack<int> s;
    while(k--) {
        std::cin >> n;
        if (n != 0) {
            s.push(n);
        } else {
            s.pop();
        }
    }
    int sum = 0;
    int size = s.size();
    for (int i = 0; i < size; i++) {
        sum += s.top();
        s.pop();
    }
    std::cout << sum << "\n";
}