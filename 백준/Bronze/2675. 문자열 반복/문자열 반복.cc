#include<iostream>
#include<string>

int main(){
    int t, r;
    std::string s;
    std::cin >> t;
    for(int i=0; i<t; i++){
        std::cin >> r >> s;
        for(int j=0; j<s.length(); j++){
            for(int k=0; k<r; k++)
                std::cout<<s[j];
        }
        std::cout<<"\n";
    }
}