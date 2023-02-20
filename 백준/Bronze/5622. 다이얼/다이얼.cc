#include<iostream>
#include<string>

int main(){	
	int dial[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
	int sum = 0;
	std::string input;
	std::cin >> input;
 
	for (int i = 0; i < input.length(); ++i) {
		int index = input[i] - 65;
		sum += dial[index];
	}
	std::cout << sum << std::endl;
}