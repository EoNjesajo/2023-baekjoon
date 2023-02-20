#include<iostream>

int number[45] = {0,};

int fib(int n){
    if(n<2)
        return n;
    else{
        return (number[n]>0) ? number[n] : number[n]=fib(n-1) + fib(n-2);
    }
}

int main(){
    std::ios_base::sync_with_stdio(false);
    int n;
    std::cin >> n;
    std::cout << fib(n) << "\n";
}