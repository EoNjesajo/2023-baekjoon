#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;
    std::vector<int> vec1(n); 

    for (int i = 0; i < n; i++){
        std::cin >> vec1[i];
    }
    std::vector<int> vec2(vec1); 
    std::sort(vec2.begin(), vec2.end()); 
    vec2.erase(std::unique(vec2.begin(), vec2.end()), vec2.end());
    for (int i = 0; i < n; i++)
    {
        auto iter = std::lower_bound(vec2.begin(), vec2.end(), vec1[i]);
        std::cout << iter - vec2.begin() << ' ';
    }

}