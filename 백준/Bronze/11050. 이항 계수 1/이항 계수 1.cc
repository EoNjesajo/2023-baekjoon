#include<iostream>
 
int Factorial(int num){
    if(num == 1 || num == 0){
        return 1;
    }else{
        return Factorial(num-1) * num;
    }
 
}
 
int main(){
    int n, k;
 
    std::cin >> n >> k;
    std::cout << Factorial(n) / (Factorial(k) * Factorial(n-k));
}