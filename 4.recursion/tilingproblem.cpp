//Given a 2*n board of tiles of size 2*1 count the number of ways to tile the given board using these tiles
#include<iostream>
using namespace std;
int tilingWays(int n){
    if(n == 0 || n == 1||n == 2){
        return n;
    }
    return tilingWays(n-1)+tilingWays(n-2);
}
int main()
{
 cout<<tilingWays(2);
return 0;
}

//This method is more time complexity friendly:-https://www.geeksforgeeks.org/tiling-problem/
// long long fib[N+1];
// 		fib[1] = 1;
// 		fib[2] = 2;
// 		for(int i=3 ; i<=N ; i++)
// 			fib[i] = (fib[i-1]+fib[i-2])%1000000007;
			
// 		return fib[N];

