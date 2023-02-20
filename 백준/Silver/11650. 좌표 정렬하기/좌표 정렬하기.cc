#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int N;
    std::cin>>N;
    std::vector<std::vector<int>> arr(N, std::vector<int>(2,0));
    for(int i = 0; i < N; i++){
        std::cin>>arr[i][0];
        std::cin>>arr[i][1];
    }
    std::sort(arr.begin(),arr.end());

    for(int i = 0; i < arr.size(); i++){
        std::cout<<arr[i][0]<<" "<<arr[i][1]<<'\n';
    }
}