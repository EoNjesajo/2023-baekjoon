#include <iostream>
#include <string>

int main() {
    std::string k;
    std::cin >> k;
    for (int i = 0; i < k.size(); i++)
    {
        if (k[i] >= 97 && k[i] <= 122)
        {
            k[i] -= 32;
        }
        else if (k[i] >= 65&&k[i]<=90)
        {
            k[i] += 32;
        }
        std::cout << k[i];
    }
    std::cout << '\n';
}