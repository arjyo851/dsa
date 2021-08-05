#include<iostream>
using namespace std;

float factorial(int n){
    if(n == 0){
        return 1;
    }
    return n*factorial(n-1);
}

float power(int n,int i){
    if (i == 0)
    {
        return 1;
    }
    if(i == 1){
        return n;
    }
    
       return n*power(n,i-1);
}

float taylor(int n){
    float sum = 0.0;
       for (int i = 0; i <= 5; i++)
       {
          sum = sum + (power(n,i)/(factorial(i)));
           
       }
       return sum;
}

int main()
{ int x;
cout<<"Input x:\n";
cin>>x;



cout<<"e^x="<<taylor(x)<<endl;

 
return 0;
}