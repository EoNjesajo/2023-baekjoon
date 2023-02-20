#include<iostream>
#include<string>

int main(){
    std::ios_base::sync_with_stdio(false);
    int n;
    std::cin >> n;
    n = (n-1)*2+1;
    for(int i=0; i<n;i+=2){
        std::string star(n-i,'*');
        std::string blank(i/2, ' ');
        std::cout << blank << star << "\n";
    }
    for(int i=3; i<=n;i+=2){
        std::string star(i,'*');
        std::string blank((n-i)/2, ' ');
        std::cout << blank << star << "\n";
    }
}