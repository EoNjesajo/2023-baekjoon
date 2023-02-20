#include<iostream>
#include <string>

int main() {
    std::string input;
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::cin >> input;
    for(int i = 0; i < alphabet.length(); i++)
        std::cout << static_cast<int>(input.find(alphabet[i])) << " ";
    std::cout<<std::endl;
}