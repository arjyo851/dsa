#include<bits/stdc++.h>
using namespace std;

int valuePostfix (string str){
    
    stack<int> s;
    for(int i = 0; str[i];++i){
        if(isdigit(str[i])){
            s.push(str[i]-'0');
        }
        else{
            int opt2 = s.top();
            int opt1 = s.top();
            switch(str[i]){
            case '+': s.push(opt2+opt1); break; 
            case '-': s.push(opt1-opt2); break; 
            case '*': s.push(opt2*opt1); break; 
            case '/': s.push(opt1/opt2); break;
            }
        }
    }
    return s.top();
}

int main() 
{ 
    string exp ; 
    cin>>exp;
    cout<<"postfix evaluation: "<< valuePostfix(exp); 
    return 0; 
} 

