#include <cmath>
#include <iostream>
#include <string>

int main() {
  int a, result = 0;
  std::string b;

  std::cin >> a >> b;

  for (int i = 2; i >= 0; i--) {
    int c = a * (b[i]-'0');
    std::cout << c << std::endl;
    result += c * pow(10, 2 - i);
  }
  std::cout << result << std::endl;
}
