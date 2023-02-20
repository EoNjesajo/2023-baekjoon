#include <iostream>

int main(){
    int h, m;
    int c;
    std::cin>>h>>m;
    std::cin>>c;
    m += c;
    do{
        if(m>59){
            h += 1;
            m = m-60;
            if(h>23)
                h = 0;
        }
    }while(m>59);
    std::cout<< h << " " << m << std::endl;
}