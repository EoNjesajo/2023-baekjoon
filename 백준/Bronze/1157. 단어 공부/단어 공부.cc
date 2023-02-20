#include<iostream>
#include<string>

int main(){
    std::string input;
    std::cin >> input;
    int count[26] = {0};

    for(int i=0; i<input.length(); i++){
        if(input[i]>90)
            count[input[i]-97]++;
        else
            count[input[i]-65]++;
    }
    int max = 0;
    char max_value=65;
    for(int i=1; i<26; i++){
        if(count[i]>count[max]){
            max = i;
            max_value = i+65;
        }else if(count[i]==count[max])
            max_value = 63;
    }
    std::cout << max_value << "\n";
}