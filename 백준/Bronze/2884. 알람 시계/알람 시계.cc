#include<iostream>

int main(){
    int h, m;
    std::cin>>h>>m;
    if(m-45<0){
        h -= 1;
        m = 60+m-45;
        if(h<0)
            h=23;
    }else
        m -= 45;
    std::cout << h << " " << m << std::endl;
}