#include<iostream>

int main(){
    int total;
    int N;
    std::cin >> total;
    std::cin >> N;
    int *object = new int[N*2];
    for(int i=0; i<N; i++)
        std::cin>>object[i]>>object[i+N];
    for(int i=0; i<N; i++)
        total -= object[i]*object[i+N];
    if(total == 0)
        std::cout << "Yes" << std::endl;
    else   
        std::cout << "No" << std::endl;
}