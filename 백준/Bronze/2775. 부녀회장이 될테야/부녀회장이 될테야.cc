#include<iostream>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int k, n;
        std::cin >> k >> n;
        if(n==1){
            std::cout << 1 << "\n";
            continue;
        }
        int *room = new int[n];
        for(int i=0; i<n; i++ )
            room[i] = i+1;
        for(int i=1; i<=k; i++){
            for(int j=1; j<=n-1; j++){
                room[j] = room[j-1] + room[j];
            }
        } 
        std::cout << room[n-1]<<"\n";
        delete[] room;
    }
}