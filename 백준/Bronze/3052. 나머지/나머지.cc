#include<iostream>

int main(){
    int input[10] = {0,};
    int count = 0;
    for(int i=0; i<10; i++){
        std::cin >> input[i];
        for(int j=0; j<i; j++){
            if(input[j]%42==input[i]%42){
                count--;
                break;
            }
        }
        count++;
    }
    std::cout << count << std::endl;
}