#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

int main() {
    int t, tmp, range, median = 0, mode, aver = 0, flag = 0;
    std::vector<int> input;
    int mode_count = -9999;
    int number[8001] = {0,};

    std::cin >> t;
    while(t--){
        std::cin >> tmp;
        input.push_back(tmp);
        aver += tmp;
        number[4000+tmp]++;
    }
    sort(input.begin(),input.end());
    for(int i = 0; i < 8001; i++){
        if(number[i] == 0)
            continue;
        if(number[i] == mode_count){
            if(flag){
                mode = i - 4000;
                flag = false;
            }
        }
        if(number[i] > mode_count){
            mode_count = number[i];
            mode = i - 4000;
            flag = 1;
        }
    }
    median = input[input.size()/2];
    aver = round((float)aver / input.size());
    range = input.back() - input.front();
    std::cout << aver << '\n' << median << '\n' << mode << '\n' << range;
}

