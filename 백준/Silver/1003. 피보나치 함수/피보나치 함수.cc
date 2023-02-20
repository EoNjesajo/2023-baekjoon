#include <iostream>

int main() {
  
  int count[2][41];
  count[0][0] = 1;
  count[0][1] = 0;
  count[1][0] = 0;
  count[1][1] = 1;
  
  int T;
  std :: cin >> T;

  while(T-->0){
    int n; 
    std :: cin >> n;
    for(int i =2; i<41; i++){
      count[0][i] = count[0][i-1]+count[0][i-2];
      count[1][i] = count[1][i-1]+count[1][i-2];
    }
    std :: cout << count[0][n] << " " << count[1][n]<< std :: endl;
  }
}