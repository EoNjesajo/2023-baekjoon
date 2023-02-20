#include<iostream>

int main(){
    int n;
    std::cin >> n;
    double* score = new double[n];
    double max, sum;
    std::cin >> score[0];
    max = score[0];
    for(int i=1; i<n; i++){
        std::cin >> score[i];
        if(score[i]>max)
            max = score[i];
    }
    for(int i=0; i<n; i++)
        sum += score[i]/max*100;
    std::cout << sum/n << std::endl;
}