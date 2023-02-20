#include <iostream>
#include <algorithm>

int main() {
    int x,y,w,h;
    int tmp1,tmp2;
    std::cin >> x >> y >> w >> h;
    tmp1 = std::min(x,y);
    tmp2 = std::min(w-x,h-y);
    std::cout << std::min(tmp1,tmp2);
}