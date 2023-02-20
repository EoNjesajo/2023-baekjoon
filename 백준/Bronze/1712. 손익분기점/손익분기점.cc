#include<iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    int a, b, c;
    std::cin >> a >> b >> c;
    if(b>=c){
        std::cout << -1 <<"\n";
        return 0;
    }
    std::cout << a/(c-b) + 1 << "\n";
}
