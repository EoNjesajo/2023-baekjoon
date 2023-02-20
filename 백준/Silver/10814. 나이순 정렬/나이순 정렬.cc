#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool compare(std::pair<int,std::string> a, std::pair<int, std::string> b)
{
    return a.first < b.first;
}
int main() {
    int num;
    std::cin >> num;
    std::pair<int,std::string> tmp;
    std::vector<std::pair<int,std::string>> arr;
    for(int i = 0; i < num; i++)
    {
        std::cin >> tmp.first >> tmp.second;
        arr.push_back(tmp);
    }
    std::stable_sort(arr.begin(),arr.end(),compare);
    for(int i = 0; i < num; i++)
        std::cout << arr[i].first << ' ' << arr[i].second << "\n";
}