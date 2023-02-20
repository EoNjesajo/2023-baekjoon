#include <iostream>
#include <string>

int main() {
  std::string cat[4] = {"\\    /\\", " )  ( ')", "(  /  )", " \\(__)|"};

  for (int i = 0; i < 4; i++) {
    std::cout << cat[i] << std::endl;
  }
}
