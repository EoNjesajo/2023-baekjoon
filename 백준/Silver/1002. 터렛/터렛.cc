#include <iostream>
#include <cmath>

int turret_funtion(int x1, int y1, int r1, int x2, int y2, int r2){
  int d = int(pow(x2-x1,2)+pow(y2-y1,2));

  if(x1==x2&&y1==y2&&r1==r2){
    return -1;
  }
  else if(d>pow(r2+r1, 2)||d<pow(r2-r1,2)){
    return 0;
  }
  else if(d==pow(r2+r1,2)||d==pow(r2-r1,2)){
    return 1;
  }
  else{
    return 2;
  }
}

int main() {
  int T;
  int x1, y1, r1, x2, y2, r2;

  std::cin >> T;
  while(T-->0){
    std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    std::cout << turret_funtion(x1,  y1,  r1,  x2,  y2,  r2)<<std::endl;
  }
}
