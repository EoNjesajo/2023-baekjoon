#include<iostream>

int main(){
    std::cout << std::fixed;
    std::cout.precision(3);
    int t, n; 
    std::cin >> t;
    for(int i=0; i<t; i++){
        std::cin >> n;

        double* score = new double[n];
        double aver = 0, above = 0;
        for(int j=0; j<n; j++){
            std::cin >> score[j]; 
            aver += score[j];
        }
        aver /= n;
        for(int j=0; j<n; j++){
            if(score[j]>aver)
                above++; 
        }
        std::cout << above/n*100 << '%' <<std::endl;
        delete[] score;
    }
}