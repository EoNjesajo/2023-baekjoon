#include<iostream>
#include<vector>

int main(){
    int n, number = 0;
    while(std::cin >> n && n!=0){
        std::vector<int> prime_number(n*2+1, 0);

        for(int i = 2; i<=n*2; i++)
            prime_number[i] = i;

        for(int i = 2; i*i<=n*2; i++){
            if(prime_number[i] == 0 ) continue;

            for(int j = 2*i; j<=n*2; j+=i){
                if(prime_number[j] != 0) prime_number[j] = 0;
            }
        }
        for(int i = n+1; i<=n*2; i++){
            if(prime_number[i]!=0) 
                number++;
        }
        std::cout << number << "\n";
        number = 0;
    }
}
