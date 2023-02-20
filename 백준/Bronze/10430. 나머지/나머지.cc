#include <iostream>

int main() {
  int A, B, C;
  std::cin>>A>>B>>C;
  int result[4] = {(A+B)%C, ((A%C) + (B%C))%C, (A*B)%C, ((A%C) * (B%C))%C};

  for(int i=0; i<4; i++)
    std::cout<<result[i]<<std::endl;
}
