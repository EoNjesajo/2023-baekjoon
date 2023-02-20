#include<iostream>

int main(){
    int a, b;
    do{
        std::cin >> a >> b;
        if(a||b)
            std::cout << a+b << std::endl;
    }while(a||b);
}