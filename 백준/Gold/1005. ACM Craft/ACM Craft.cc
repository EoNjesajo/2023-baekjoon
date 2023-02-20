#include <iostream>
#include <vector>
#include <queue>
 
int main() {
    int T;
    std::cin >> T;
    
    while (T--){
        int N, K;
        std::cin >> N >> K;
        int* D = new int[K];
        int result[1002];
        int degree[1002] = {0,};
        
        for (int i = 1; i <= N; i++) {
            std::cin >> D[i];
        }

        std::queue<int> q;
        std::vector<int> node[1002];

        while (K--) {
            int X, Y;
            std::cin >> X >> Y;
            node[X].push_back(Y);
            degree[Y]++;
        }
 
        int W;
        std::cin >> W;
 
        for (int i = 1; i <= N; i++) {
            if (degree[i] == 0) {
                q.push(i);
            }
            result[i] = D[i];
        }
 
        while (!q.empty()) {
            int cur = q.front();
            q.pop();
 
            for (int i = 0; i < node[cur].size(); i++) {
                int next = node[cur][i];
                degree[next]--;
                result[next] = std::max(result[next], result[cur] + D[next]);
 
                if (degree[next] == 0) {
                    q.push(next);
                }
            }
        }
        std::cout << result[W] << std::endl;
        delete[] D;
    }
    return 0;
}