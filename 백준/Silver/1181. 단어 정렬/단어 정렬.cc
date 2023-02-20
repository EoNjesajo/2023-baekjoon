#include <iostream>
#include <vector>
#include <algorithm>

bool compare(std::string a, std::string b){
  if(a.length() == b.length())
    return a<b;
  return a.length()<b.length();
}

int main(){
  int N;
  std::vector<std::string> vec;  
  std::cin>>N;
  while(N--){
    std::string str;
    std::cin>>str;
    if(std::find(vec.begin(), vec.end(), str) == vec.end())
      vec.push_back(str);
  }
  std::sort(vec.begin(), vec.end(), compare);

  for(int i=0; i<vec.size(); i++){
    std::cout<<vec[i]<<'\n';
  }
}