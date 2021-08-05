#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

void reverse(char *c,int n){
    stack<char> s;         //new thing I learnt
    for (int i = 0; i < n; i++)
    {
        s.push(c[i]);        //new thing I learnt
    }

    for (int i = 0; i < n; i++)
    {
        c[i] = s.top();   //new thing i learnt
        s.pop();
    }
    
    
}

int main(){
    char c[51];
    printf("Enter a string:");
    gets(c);
    reverse(c,strlen(c));
    printf("Output = %s",c);
    return 0;
}