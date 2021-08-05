#include<iostream>
using namespace std;
bool isPoweroftwo(int n){
    return (n&&!(n & n-1));
}
int main()
{
 cout<<isPoweroftwo(16);
return 0;
}