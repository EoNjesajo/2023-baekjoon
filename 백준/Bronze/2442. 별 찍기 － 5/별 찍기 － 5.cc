#include<iostream>
#include<string>

int main(){
    std::ios_base::sync_with_stdio(false);
    int n;
    std::cin >> n;
    n = 1 + (n-1)*2;
    for(int i=1; i<=n; i+=2){
        std::string blank((n-i)/2,' ');
        std::string star(i, '*');
        std::cout << blank << star << "\n";
    }
}