#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string str){
    
    stack<char> s;
    char x;
    
    for(int i=0;i<str.length();i++){
        
        if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
            s.push(str[i]);
            continue;
        }
        
        if(s.empty()){
            return false;
        }
        
        switch(str[i]){
            case ')':  x = s.top();
                       s.pop();
                       if(x == '[' || x == '{'){
                           return false;
                       }
                       
                       break;
            case ']':  x = s.top();
                       s.pop();
                       if(x == '(' || x == '{'){
                           return false;
                       }
                       
                       break;
            case '}':  x = s.top();
                       s.pop();
                       if(x == '[' || x == '('){
                           return false;
                       }
                       
                       break;
        }
    }
    
    return (s.empty());
}


int main(){
    string str;
    
    cout<<"Enter your brackets:";
    cin>>str;
    
    if(isBalanced(str)){
        cout<<"Balanced";
    }
    else{
        cout<<"Your string is unbalanced";
    }
    return 0;
}