#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::string a, b;
    int carry = 0;
    std::vector<int> result;
    std::cin >> a >> b;
    if(b.length() > a.length()){
        std::swap(a, b);
    }
    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());

    for(int i=0; i<b.length(); i++){
        int sum = (a[i]-'0') + (b[i]-'0') + carry;

        result.insert(result.begin(), sum%10);
        carry = sum/10;
    }
    for(int j=b.length(); j<a.length(); j++){
        int sum = (a[j]-'0') + carry;

        result.insert(result.begin(), sum%10);
        carry = sum/10;
    }
    if(carry!=0) result.insert(result.begin(),carry);

    for(auto ele : result)
        std::cout << ele;
}