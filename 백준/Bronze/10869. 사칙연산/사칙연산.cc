#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;

  int result[5] = {a+b, a-b, a*b, a/b, a%b};

  for(int i=0; i<5; i++)
    std::cout<<result[i]<<std::endl;    
}