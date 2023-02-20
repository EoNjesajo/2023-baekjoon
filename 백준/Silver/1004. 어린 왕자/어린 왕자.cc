#include <iostream>
#include <cmath>

int main() {
  int T;
  std::cin>>T;
  for(int i=0;i<T;i++){
    int count = 0;
    int x1, x2, y1, y2;
    int n;
    std::cin >> x1 >> y1 >> x2 >> y2;
    std::cin >> n;
    for(int j=0; j<n; j++){
      int cx, cy, r;
      bool result1, result2;
      std::cin>>cx>>cy>>r;
      result1 = pow(cx-x1,2)+pow(cy-y1,2)<pow(r,2)?true:false;
      result2 = pow(cx-x2,2)+pow(cy-y2,2)<pow(r,2)?true:false;
      if(result1!=result2){
        count++;
      }
    }
    std::cout << count<<std::endl;
  }
} 