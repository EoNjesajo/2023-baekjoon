#include<iostream>
#include<string>

int main(){	
    std::ios_base::sync_with_stdio(false);
	int n;
	int group_word = 0;
	std::string input;
	std::cin >> n;

	for(int i=0; i<n; i++){
		std::cin >> input;
		bool flag = true;
		for(int j=0; j<input.length(); j++){
			for(int k=0; k<j; k++){
				if(input[j] != input[j-1] && input[j] == input[k]){
					flag = false;
					break;			
				}				
			}
		}
		if(flag) group_word++;
	}
	std::cout << group_word<< std::endl;
}
