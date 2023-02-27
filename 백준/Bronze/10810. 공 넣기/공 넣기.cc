#include <iostream>
#include <vector>

int main() {
  int N, M;
  int i, j, k;
  std::cin >> N >> M;
  std::vector<int> basket(N,0);
  while(M--){
    std::cin >> i >> j >> k;
    for(;i<=j;i++){
      basket[i-1] = k;
    }
  }
  for(auto element : basket)
    std::cout << element << " ";
}