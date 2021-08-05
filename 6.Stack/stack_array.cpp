#include<iostream>
using namespace std;
#define n 100
class stack
{
private:
    int *arr;
    int top;
public:
    stack(){
        arr = new int[n];
        top = -1;
    }

    void Push(int x){
        if(top == n-1){
            cout<<"Stack overflow!!!";
            return;
        }
        top++;
        arr[top] = x;
    }

    void Pop(int x){
        if(top == -1){
            cout<<"NO elements to pop";
            return;
        }
        top--;
    }

    int Top(){
            if (top == -1)
            {
                cout<<"No element in stack";
                return 0;
            }

            return arr[top];
        
    }
};


int main()
{
 stack st;
 st.Push(3);
 st.Push(2);
 st.Push(7);
 cout<<st.Top()<<endl;
return 0;
}