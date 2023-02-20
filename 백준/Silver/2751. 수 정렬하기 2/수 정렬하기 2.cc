#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::vector<int> result;
    int t, tmp;
    std::cin >> t;
    while(t--){
        std::cin >> tmp;
        result.push_back(tmp);
    }
    std::sort(result.begin(), result.end());
    for(auto ele : result)
        std::cout << ele << "\n";
}