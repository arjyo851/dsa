// excellent example of recursion
// see this gfg article https://www.geeksforgeeks.org/program-to-efficiently-calculate-ex/
#include <bits/stdc++.h>
using namespace std;

float TaylorsFunction (float, float);

int main ()
{
    system("cls");
    
    float X, N;
    
    cout << "Enter 'X': ";
    cin >> X;
    cout << "Enter 'N': ";
    cin >> N;
    
    float Result = TaylorsFunction (X, --N);
    cout << endl;
    
    cout.setf(ios::fixed);
    cout << "Result of given series (e^x) is = " << setprecision (2) << Result;
    
    cout << endl;
    return 0;
}

float TaylorsFunction (float X, float N)
{
    static float Result = 1; //static ensures that the variable result will get updated withing the function
    
    if (!N)
    {
        return Result;
    }
    
    Result = 1 + ((X / N) * Result);
    TaylorsFunction(X, --N);
}

