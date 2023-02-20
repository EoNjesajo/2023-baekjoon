#include<iostream>
#include<string>
#include <vector>
//c=, c-, dz=, d-, lj, nj, s=, z=

int main() {
    std::vector<std::string> croatian = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    std::ios_base::sync_with_stdio(false);
    int index;
    std::string str;
    std::cin >> str;
    for(int i = 0; i < croatian.size(); i++)
    {
        while(true){
            index = str.find(croatian[i]);
            if(index == std::string::npos)
                break;
            str.replace(index,croatian[i].length(),"_");
        }
    }
    std::cout << str.length()<<'\n';
}