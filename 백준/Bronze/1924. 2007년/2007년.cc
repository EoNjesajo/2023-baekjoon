#include <iostream>

std::string week[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
int month_day[] = {31,28,31,30,31,30,31,31,30,31,30,31 };

int main() {
    int month, day;
    int total=0;
    std::cin >> month >> day;

    for(int i=1;i<month;i++) 
        total+=month_day[i-1]; 

    total+=day+2; 
    total= (5+total)%7; 

    std::cout << week[total]; 
}