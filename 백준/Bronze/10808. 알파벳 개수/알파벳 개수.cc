#include<iostream>
#include<string>

int list[26];

int main() {
	std::ios::sync_with_stdio(false);

	std::string str;
	std::cin >> str;
	for (int i = 0; i < str.size(); i++) {
		list[str[i] - 97]++;
	}
	for (int i = 0; i < 26; i++) {
		std::cout << list[i]<<" ";
    }
}