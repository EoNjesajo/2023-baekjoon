#include<iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    int n;
    std::cin >> n;
    int column = 1;
    while(n>column){
        n -= column;
        column++;
    }
    if(column%2 == 0)
        std::cout << n << "/" << column-n+1 << "\n";
    else 
        std::cout << column-n+1 << "/" << n << "\n";
}