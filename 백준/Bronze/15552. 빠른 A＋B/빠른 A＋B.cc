#include<iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int T, a, b;
    std::cin >> T;
    for(int i=0; i<T; i++){
        std::cin >> a >> b;
        std::cout << a + b << "\n";
    }
}