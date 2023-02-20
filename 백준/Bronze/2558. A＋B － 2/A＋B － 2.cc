#include<iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    int input[2];
    for(int i=0; i<2; i++)
        std::cin >> input[i];
    std::cout << input[0] + input[1]<<"\n";
}