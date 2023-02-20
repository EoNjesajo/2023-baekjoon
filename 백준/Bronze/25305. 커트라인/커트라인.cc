#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::ios_base::sync_with_stdio(false);
    int n, k, tmp;
    std::vector<int> score;

    std::cin >> n >> k;
    while(n--){
        std::cin >> tmp;
        score.push_back(tmp);
    }
    std::sort(score.begin(), score.end(), std::greater<int>());
    std::cout << score[k-1] << "\n"; 

}