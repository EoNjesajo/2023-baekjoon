#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::string text;
    while (std::getline(std::cin, text)) {
        std::cout << text << std::endl;
    }
}
