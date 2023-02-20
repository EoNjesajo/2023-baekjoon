#include<iostream>
#include<vector>
#include <algorithm>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::vector<int> input(3);
    std::cin >> input[0] >> input[1] >> input[2];
    std::sort(input.begin(), input.end());
    std::cout << input[1] << "\n";
}