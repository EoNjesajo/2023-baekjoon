#include<iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    int n, result=1;
    std::cin >> n;
    for(int i=1; i<=n; i++)
        result *= i;
    std::cout << result << "\n";
}