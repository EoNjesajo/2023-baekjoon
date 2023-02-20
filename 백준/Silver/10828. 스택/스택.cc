#include <iostream>
#include <stack>
#include <string>

int main() {
	std::stack<int> s;      
	int N;             
	std::string command;    
	int num;           
	int result = 0;   

	std::cin >> N;

	for (int i = 0; i < N; i++) {
		std::cin >> command;
		if (command == "push") {
			std::cin >> num;
			s.push(num);
		}
		else if (command == "pop") {
			if (s.size() == 0) {
				result = -1;
				std::cout << result << "\n";
			}
			else {
				result = s.top();
				std::cout << result << "\n";
				s.pop();
			}
		}
		else if (command == "size") {
			std::cout << s.size() << "\n";
		}
		else if (command == "empty") {
			if (s.size() == 0) {
				result = 1;
				std::cout << result << "\n";
			}
			else {
				result = 0;
				std::cout << result << "\n";
			}
		}
		else if (command == "top") {
			if (s.size() == 0) {
				result = -1;
				std::cout << result << "\n";
			}
			else {
				result = s.top();
				std::cout << result << "\n";
			}
		}
	}
}