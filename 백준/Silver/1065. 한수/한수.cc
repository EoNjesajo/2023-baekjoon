#include<iostream>

int function(int n){
    int count;

    if(n < 100)
        count = n;
    else{
        count = 99;
        for(int i=100; i<=n; i++){
            if(i/100-i/10%10 == i/10%10-i%10) 
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    std::cin >> n;
    std::cout << function(n) << std::endl;

}