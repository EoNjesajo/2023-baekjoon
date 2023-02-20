#include<iostream>

int main(){
    int n, sum = 0;
    std::cin >> n;
    char* input = new char[n];
    std::cin >> input;
    for(int i=0; i<n; i++){
        sum += static_cast<int>(input[i])-48;
    }
    std::cout << sum << std::endl;
    delete[] input;
}