#include<iostream>

int main(){
    int n, x;
    std::cin >> n >> x;

    int* number = new int[n];
    
    for(int i=0; i<n; i++)
        std::cin >> number[i];
    
    for(int j=0; j<n; j++){
        if(x>number[j]) std::cout << number[j] << ' ';
    }
    std::cout << std::endl;
}