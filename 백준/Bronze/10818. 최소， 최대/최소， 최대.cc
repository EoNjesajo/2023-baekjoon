#include<iostream>

int main(){
    int n;
    std::cin >> n;
    int* array = new int[n];
    for(int i=0; i<n; i++)
        std::cin >> array[i];
    int max = array[0];
    int min = array[0];
    for(int i=1; i<n; i++){
        if(array[i]>max)
            max = array[i];
        if(array[i]<min)   
            min = array[i];
    }
    std::cout << min << " " << max << std::endl;
}