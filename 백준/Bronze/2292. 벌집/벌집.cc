#include<iostream>

//6+1 19(6*(1+2)+1) 37(6*(1+2+3)+1) 61(6*(1+2+3+4)+1) ...
int main(){
    std::ios_base::sync_with_stdio(false);
    int n, cut=1;
    std::cin >> n;
    if(n==1){
        std::cout << 1 << '\n';
        return 0;
    }
    for(int i=2;true;i++){
        if(6*cut+1>=n){
            std::cout << i << "\n";
            return 0;
        }
        cut += i;
    }
}