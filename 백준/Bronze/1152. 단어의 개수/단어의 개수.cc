#include<iostream>
#include<string>

int get_number(std::string);

int main(){
    std::ios_base::sync_with_stdio(false);
    std::string str;
    std::getline(std::cin, str);
    int number = get_number(str);
    std::cout << number << "\n";
    
}

int get_number(std::string str){
    int count = 1;
    for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ')
			count++;
	}
	if (str[0] == ' ') 
		count--;
	if (str[str.length() - 1] == ' ') 
		count--;
    return count;
}