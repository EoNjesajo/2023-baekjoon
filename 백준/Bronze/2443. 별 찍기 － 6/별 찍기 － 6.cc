#include<iostream>

int main(){
  std::ios_base::sync_with_stdio(false);
  int n;
  std::cin >> n;
  for(int i=0; i<n; i++){
    std::string star((n-i-1)*2+1, '*');
    std::string blank(i, ' ');
    std::cout << blank << star << '\n';
  }
}