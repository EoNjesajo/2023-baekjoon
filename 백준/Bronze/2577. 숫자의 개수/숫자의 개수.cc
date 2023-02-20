#include<iostream>
#include<string>

int count[10];

int main(){
    int input[3];
    std::ios_base::sync_with_stdio(false);
    
    for(int i=0; i<3; i++)
        std::cin >> input[i];
    std::string result = std::to_string(input[0]*input[1]*input[2]);

    for(int i=0; i<result.length(); i++){
        for(int j=0; j<10; j++){
            if(result[i]==static_cast<char>(j+48))
                count[j]++;
        }
    }
    for(int i=0; i<10; i++)
        std::cout << count[i] << "\n";
}