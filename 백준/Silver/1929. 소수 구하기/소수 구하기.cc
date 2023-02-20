#include<iostream>
#include<vector>

int main(){
    std::ios_base::sync_with_stdio(false);
    int m, n;
    std::cin >> m >> n;
    std::vector<int> prime_number(n+1, 0);
    for(int i = 2; i<=n; i++)
        prime_number[i] = i;
    for(int i = 2; i*i<=n; i++){
        if(prime_number[i] == 0 ) continue;
        for(int j = 2*i; j<=n; j+=i){
            if(prime_number[j] != 0) prime_number[j] = 0;
        }
    }
    for(int i = m; i<=n; i++){
        if(prime_number[i]!=0) 
            std::cout << prime_number[i] << "\n"; 
    }
}