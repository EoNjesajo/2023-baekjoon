#include<iostream>
#include<string>

int main(){
    std::ios_base::sync_with_stdio(false);
    int n;
    std::cin >> n;
    std::string blank(n-1,' ');
    std::cout<< blank << "*" << "\n";
    int j = 1;
    for(int i=n-1; i>=1;i--){
        std::string blank(i-1,' ');
        std::string blank2(j, ' ');
        std::cout << blank << "*" << blank2 << "*" << "\n";
        j+=2;
    }
}