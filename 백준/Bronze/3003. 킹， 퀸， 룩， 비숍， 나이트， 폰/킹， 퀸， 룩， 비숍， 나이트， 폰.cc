#include<iostream>

int main(){
    int input[6];
    int piece[6] = {1,1,2,2,2,8};

    std::cin>>input[0]>>input[1]>>input[2]>>input[3]>>input[4]>>input[5];
    for(int i = 0; i<6; i++)
        input[i] = piece[i] - input[i];
    
    for(int i = 0; i<6; i++){
        std::cout<<input[i];
        if(i==5) break;
        std::cout<<" ";
    }
    std::cout<<std::endl;
}