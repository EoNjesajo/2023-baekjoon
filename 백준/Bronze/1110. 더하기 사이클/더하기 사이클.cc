#include <iostream>

int main(){
    int n, flag, count = 0;
    std::cin >> n;
    flag = n;
    do{
        if(n<10)
            n = n%10*10 +  n%10%10;
        else 
            n = n%10*10 +(n/10 +  n%10)%10;
        count ++;
    }while(flag != n);
    std::cout << count << std::endl;
}