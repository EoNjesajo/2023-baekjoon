#include <iostream>
#include <string>

int main(){
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	int T;
	std::cin >> T;

	while(T--){
		std::string s;
		std::cin >> s;

		int count = 0;
		int left = 0;
		int right = s.length() - 1;
		bool flag = true;

        while(left <= right){
			count++;

			if (s[left] != s[right])
			{
				flag = false;
				break;
			}
            left++, right--;
		}
		std::cout << (flag ? 1 : 0) << " " << (flag && s.length() % 2 == 0 ? count + 1 : count) << "\n";
	}
}