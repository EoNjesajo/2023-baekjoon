#include<iostream>

int main(){
    int input, sum = 0;
    std::cin >> input;
    for(int i = 1; i <= input; i++)
        sum+=i;
    std::cout << sum << std::endl;
}