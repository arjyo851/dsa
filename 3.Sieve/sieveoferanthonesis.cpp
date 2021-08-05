//Sieve of eranthonesis

#include<iostream>
using namespace std;
void sieveoferanthonesis(int n){
    int prime[100]={0};
    cout<<"marking all numbers with 0";
    for (int i = 0; i < n; i++)
    {
        cout<<prime[i];
    }
    
cout<<endl;
    for (int i = 2; i <=n; i++)
    {
        if (prime[i]==0)
        {
            for (int j = i*i; j <=n; j+=i)
            {
                prime[j]=1;
            }
            
        }
    }
    cout<<"marking after determining prime numbers ";
    for (int i = 0; i < n; i++)
    {
        cout<<prime[i];
    }

cout<<endl;
        for (int i = 0; i <=n; i++)
        {
            if (prime[i]==0)
            {
                cout<<i<<" ";
            }
            
        }
    
}
int main()
{
    int n;
    cout<<"Enter upto which number do you want your prime numbers:";
    cin>>n;
    sieveoferanthonesis(n);
 
return 0;
}