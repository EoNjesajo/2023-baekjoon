#include<iostream>
#include<algorithm>
#include<vector>
 
bool compare(std::pair<int, int>a, std::pair<int, int>b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    else {
        return a.second < b.second;
    }
}
 
int main(){
    int N, x, y;
    std::vector<std::pair<int, int> > v;
    std::cin >> N;
    
    for(int i=0; i<N; i++){
        std::cin >> x >> y;
        v.push_back(std::make_pair(x,y));
    }
    
    std::sort(v.begin(),v.end(),compare);
 
    for(int i=0; i<N; i++)
        std::cout << v[i].first << " " << v[i].second << "\n";
}
