#include <vector>
#include <algorithm>
#include <iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::vector<int> number;
    int n, input;
    std::cin >> n;
    for(int i=0; i<n; i++){
        std::cin >> input;
        number.push_back(input);
    }
    std::sort(number.begin(), number.end());
    for(int i=0; i<number.size(); i++)
        std::cout << number[i] << "\n";
}