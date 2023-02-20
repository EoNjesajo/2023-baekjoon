#include<iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    int sugar, count = 0;
    std::cin >> sugar;
    while(sugar>=0){
        if(sugar%5 == 0){
            std::cout << count+sugar/5 << "\n";
            return 0;
        }
        sugar -= 3;
        count++;
    }
    std::cout << -1 << "\n";
}