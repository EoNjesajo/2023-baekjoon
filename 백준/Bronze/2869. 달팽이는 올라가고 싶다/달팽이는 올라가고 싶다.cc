#include<iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    int a, b, v, d=1;
    std::cin >> a >> b >> v;
    d+=(v-a)/(a-b);
    ((v-a)%(a-b)!=0) ? d+=1 : d;

    std::cout << d << "\n";
}
