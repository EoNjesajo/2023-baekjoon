#include<iostream>

int main(){
    char ox[80];
    int t; 
    std::cin >> t;

    for(int i=0; i<t; i++){
        std::cin >> ox;
        int index = 0, score=1, sum=0;
        while(true){
            if(ox[index]=='O'){
                sum += score;
                score++;
            }else if(ox[index]=='X')
                score = 1;
            else if(ox[index]=='\0')
                break;
            index++;
        }
        std::cout << sum << std::endl;
    }
}