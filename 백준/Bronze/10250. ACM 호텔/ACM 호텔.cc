#include<iostream>

int main(){
    int t, h, w, n;
    std::cin>>t;
    for(int i=0; i<t; i++){
        std::cin >> h >> w >> n;
        int level = n%h; 
        int unit = (n/h)+1;
        if(n%h == 0){
            level = h;
            unit-=1;
        }
        (unit>=10) ? std::cout << level << unit << "\n" : std::cout << level << 0 << unit << "\n";
    }
}