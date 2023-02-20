#include<iostream>

int main(){
    int input[3]; 
    int result;
    std::cin >> input[0] >> input[1] >> input[2];
    
    bool like[3] = {input[0]==input[1], input[1]==input[2], input[0]==input[2]};

    if(like[0] && like[1] && like[2])
        result = 10000 + 1000*input[0];
    else{
        for(int i=0; i<3; i++){
            if (like[i]){
                result = 1000 + 100 *input[i%2];
                break;
            }
            if(i==2){
                int max = 0;
                for(int j=0; j<3; j++){
                    if(max<input[j])
                        max = input[j];
                }
                result = 100 * max;    
            }
        }
    }
    std::cout << result << std::endl;
}