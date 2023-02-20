#include <iostream>
#include <utility>

int main() {
    int num;
    int rank = 1;
    std::pair<int,int> arr[50];
    std::cin >> num;
    for(int i = 0; i < num; i++)
        std::cin >> arr[i].first >> arr[i].second;
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num; j++)
            if(arr[i].first < arr[j].first && arr[i].second < arr[j].second)
                rank++;
        std::cout << rank << ' ';
        rank = 1;
    }
}