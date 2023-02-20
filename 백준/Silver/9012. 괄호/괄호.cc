#include <iostream>
#include <string>
#include <stack>

int main() {
	int t;
	std::cin >> t;
	while (t--) {
		std::string input;
		std::cin >> input;

		std::stack<char> st;
		std::string answer = "YES";
		for (int i = 0; i < input.length(); i++) {
			if (input[i] == '(') {
				st.push(input[i]);
			}
			else if (!st.empty() && input[i] == ')' && st.top() == '(') {
				st.pop();
			}
			else {
				answer = "NO";
				break;
			}
		}
		if (!st.empty()) answer = "NO";
		std::cout << answer << "\n";
	}
}