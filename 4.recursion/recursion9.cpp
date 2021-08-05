//count the number of paths from one block to another
/*  
|-------|   
|   0   |
|-------|
|   1   |
|-------|
|   2   |
|-------|
|   3   |
|-------|
*/

// we have to find number of ways to move from 0 to 3

#include <iostream>
using namespace std;
int countPath(int s, int e)
{

    if (s == e)
    {
        return 1;
    }
    if (s > e)
    {
        return 0;
    }
    int count = 0;
    for (int i = 1; i <=6; i++)
    {
        count += countPath(s + i, e);
    }

    return count;
}


int main()
{
    cout << countPath(0, 3);
    return 0;
}