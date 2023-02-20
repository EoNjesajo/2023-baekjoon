#include<iostream>
#include<queue>
#include<string>

int main(){
    int N;
    std::cin >> N;
    std::queue<int> q; 
    int num;
    for(int i=0; i<N; i++){
        std::string str;
        std::cin >> str;
        if(str == "push"){
            int data;
            std::cin >> data;
            q.push(data);
        }else if(str == "pop"){
            if(q.size() != 0){
                num = q.front();
                q.pop();
            }else{
                num = -1;
            }
            std::cout<< num << "\n";
        }else if(str=="size"){
            std::cout<<q.size()<<"\n";
        }else if(str=="empty"){
            if(q.size() == 0)
                num = 1;
            else num =0;
                std::cout << num << "\n";         
        }else if(str == "front"){            
            if(q.size() == 0){                
                num = -1;            
            }else{                
                num = q.front();            
            }            
            std::cout << num << "\n";         
        }else if(str == "back"){            
            if(q.size() == 0){                
                num = -1;            
            }else{                
                num = q.back();
            }            
            std::cout << num << "\n";        
        }     
    }    
}
