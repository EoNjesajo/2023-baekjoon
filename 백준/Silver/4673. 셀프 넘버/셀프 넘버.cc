#include<iostream>
#include<string>

int function(int );
bool arr[10001] ;

int main(){
    for(int i=1; i<10001; i++){
        int index = function(i);
        if(10001>=index)
            arr[index] = true;
    }
    for(int i=1; i<10001; i++){
        if(!arr[i]) std::cout << i << std::endl;
    }

}

int function(int n){
    int sum = n, cipher = std::to_string(n).size();
    switch(cipher){
        case 5: 
            sum += n/10000%10;
        case 4: 
            sum += n/1000%10;
        case 3: 
            sum += n/100%10;
        case 2: 
            sum += n/10%10;
        case 1: 
            sum += n%10;
            break;
        default :
            break;
    }
    return sum;
}
