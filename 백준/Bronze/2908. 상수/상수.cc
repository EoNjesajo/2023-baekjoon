#include<iostream>
#include<string>
#include<algorithm>

int main(){
    std::string input[2];
    std::string max;
    std::cin >> input[0] >> input[1];
    for(int i=0; i<2; i++)
        std::reverse(input[i].begin(), input[i].end());
    max = (std::stoi(input[0])>std::stoi(input[1])) ? input[0]:input[1];
    std::cout << max << "\n";
}