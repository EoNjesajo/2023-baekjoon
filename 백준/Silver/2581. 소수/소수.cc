#include<iostream>
#include<algorithm>
#include<vector>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::vector<int> prime_number;
    int m, n, count = 0, sum = 0;
    std::cin >> m >> n;
    for(int i = m; i <= n; i++){
        for (int j = 1; j <= i; j++) {
			if (i%j == 0)
				count++;
		}
		if (count == 2)
            prime_number.push_back(i);
		count = 0;
    }
    if(prime_number.size() == 0){
        std::cout << -1 << "\n";
        return 0;
    }
    for(auto ele : prime_number){
        sum += ele;
    }
    std::cout << sum << "\n" << prime_number[0] << "\n";
}