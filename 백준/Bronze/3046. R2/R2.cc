#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
 
int main()
{
	int n, avg;
	int result;
 
	std::cin >> n >> avg;
 
	result = (avg * 2) - n;
 
	std::cout << result << "\n";
}