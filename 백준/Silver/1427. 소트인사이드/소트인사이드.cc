#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::vector<int> result;
    std::string number;
    std::cin >> number;
    for(int i = 0; i < number.length(); i++)
        result.push_back(number[i]-'0');
    std::sort(result.begin(), result.end(), std::greater<int>());
    for(auto ele : result)
        std::cout << ele;

}