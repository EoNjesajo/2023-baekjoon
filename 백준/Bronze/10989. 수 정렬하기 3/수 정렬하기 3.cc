#include<iostream>
#include<vector>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t, tmp;
    std::vector<int> number(10001, 0);

    std::cin >> t;
    while(t--){
        std::cin >> tmp;
        number[tmp] += 1;
    }

    for(int i=1; i<=10000; i++){
        if(number[i]){
            for(int j=0;j<number[i];j++)
                std::cout << i << "\n";
        }
    }
}