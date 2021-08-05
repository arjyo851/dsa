#include<iostream>
#include<math.h>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{ float x,t,sum;
cout<<"Input x:\n";
cin>>x;
t = t+1;
sum = 0;
for (int i = 0; i <= x; i++)
{
    t = (pow(x,i)/(factorial(i)));
    sum = sum+t;
}

cout<<"e^5="<<sum<<endl;

 
return 0;
}