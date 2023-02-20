#include <iostream>
#include <vector>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
    
	int n, m;
	std::cin >> n >> m;
	std::vector<int> prefix(n + 1);
	prefix[0] = 0;
	for (int i = 1; i <= n; i++) {
		int num;
		std::cin >> num;
		prefix[i] = prefix[i - 1] + num;
	}
	for (int i = 0; i < m; i++) {
		int s, e;
		std::cin >> s >> e;
		std::cout << prefix[e] - prefix[s - 1]<<'\n';
	}
}