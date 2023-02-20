#include<iostream>

int main(){
    int num[9];
    std::cin >> num[0];
    int max = num[0], 
    max_index = 1;
    for(int i = 2; i<10; i++){
        std::cin >> num[i-1];
        if(num[i-1] > max){
            max = num[i-1];
            max_index = i;
        }
    }
    std::cout << max << std::endl << max_index << std::endl;
}
