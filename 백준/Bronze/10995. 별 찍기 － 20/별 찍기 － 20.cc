#include<iostream>
#include<string>

int main(){
    std::ios_base::sync_with_stdio(false);
    int n;
    std::string star = "*";

    std::cin >> n;
    for(int i=0; i<n-1; i++)
        star += " *";
    for(int i=0; i<n; i++){
        if(i%2 == 0)
            std::cout << star << "\n";
        else
            std::cout << " " + star << "\n";
    }
}