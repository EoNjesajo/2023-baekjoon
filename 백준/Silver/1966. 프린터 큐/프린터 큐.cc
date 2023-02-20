#include<iostream>
#include<queue>

int main() {
    int count=0;
    int t;
    std::cin >> t;
    int n, m,ipt;
    while(t--) {
        count = 0;
        std::cin >> n >> m;
        std::queue<std::pair<int, int>> q;
        std::priority_queue<int> pq;
        for (int j = 0; j < n; ++j) {
            std::cin >> ipt;
            q.push({ j, ipt });
            pq.push(ipt);
        }
        while (!q.empty()) {
            int index = q.front().first;
            int value = q.front().second;
            q.pop();
            if (pq.top() == value) {
                pq.pop();
                count++;
                if (index == m) {
                    std::cout << count << "\n";
                    break;
                }
            }
            else q.push({ index,value });
        }
    }
}